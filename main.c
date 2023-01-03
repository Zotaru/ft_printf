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

    c = '1';
    write(1, &c, 1);
    printf("\naddition basique %d", AddNumbers(2, 4, 5));
    printf("\n");
    test_va("ceci est un test:", "test1", "test2", "test3");

    printf("\n%dd", 10, 10);
    return (0);
}