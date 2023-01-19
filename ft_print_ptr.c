#include "ft_printf.h"

int ft_putnbr_base_ptr(unsigned long long ptr, int *length)
{
    if (ptr >= 16)
        ft_putnbr_base_ptr(ptr / 16, length);
    ft_putchar(HEXA[ptr % 16]);
    return(*length += 1);
}

int ft_print_ptr(unsigned long long ptr)
{
    int length;

    length = ft_putstr("0x");
    if (ptr == 0)
        length += ft_putchar('0');
    else
    {
        ft_putnbr_base_ptr(ptr, &length);
    }
    return(length);
}