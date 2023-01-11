#include "ft_printf.h"

int AddNumbers(int n, ...)
{
    int Sum = 0;

    // Declaring pointer to the
    // argument list
    va_list ptr;

    // Initializing argument to the
    // list pointer
    va_start(ptr, n);

    for (int i = 0; i < n; i++)

        // Accessing current variable
        // and pointing to next one
        Sum += va_arg(ptr, int);

    // Ending argument list traversal
    va_end(ptr);

    return Sum;
}

int test_va(const char *str, ...)
{
    va_list ptr;

    printf("%s\n", str);
    
    va_start(ptr, str);
    printf("%s\n", va_arg(ptr, char*));
    printf("%s\n", va_arg(ptr, char*));
    printf("%s\n", va_arg(ptr, char*));
    va_end(ptr);
    return (0);
}

int main(void)
{
    char    c;
    int     l;


    c = '1';
    write(1, &c, 1);
    printf("\naddition basique %d", AddNumbers(2, 4, 5));
    printf("\n");
    test_va("ceci est un test:", "test1", "test2", "test3");

    printf("\n%dd", 10);

    l = ft_printf("\nsalut toi %s", "\noui et toi");
    printf("\n%d\n", l);
    printf("%p", &l);
    printf("\n");
    int *pointeur;

    pointeur = &l;
    printf("%p\n", pointeur);
	
	printf("%d\n", 15);


	l = ft_putnbr_base("0123456789", 1000);
	printf("\n%d", l);

	printf("\n");

	printf("%x\n", -100);
	l = ft_putnbr_base(HEXA_MIN, -100);
	printf("\n%d", l);

    return (0);
}
