/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:42:29 by amonier           #+#    #+#             */
/*   Updated: 2023/01/06 18:42:30 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int length;

    length = 0;
    while (str[length])
    {
        write(1, &str[length], 1);
        length++;
    }
    return (length);
}

int ft_conversion(va_list ptr, char c)
{
    int length;

    length = 0;
    if (c == 'c')
    {
        length += ft_putchar((char) va_arg(ptr, int));
    }
    else if (c == 's')
    {
        length += ft_putstr(va_arg(ptr, char *));
    }
    else if (c == 'p')
    {

    }
    else if (c == 'd')
    {

    }
    else if (c == 'i')
    {

    }
    else if (c == 'u')
    {

    }
    else if (c == 'x')
    {

    }
    else if (c == 'X')
    {

    }
    else if (c == '%')
    {

    }
    return (length);
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
            length += ft_conversion(ptr, str[i + 1]);
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

