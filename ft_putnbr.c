#include "ft_printf.h"

int ft_putnbr(int n, int *length)
{
    if (n < 0)
    {
        n = n * (-1);
        ft_putchar('-');
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10, length);
    }
    ft_putchar(BASE_10[n % 10]);
    return(*length += 1);
}