#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_printf(const char *str, ...)
{
    va_list ptr;
    int     i;
    int     length;

    i = 0;
    length = 0;
    va_start(ptr, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            //fonction gerant tous les cas 
            i += 2;
        }
        else
        {
            length += ft_putchar(str[i]);
            i++;
        }
    }
    va_end(ptr);
    return (length);
}

