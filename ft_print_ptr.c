/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:14:15 by amonier           #+#    #+#             */
/*   Updated: 2023/01/25 22:29:53 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_ptr(unsigned long long ptr, int *length)
{
	if (ptr >= 16)
		ft_putnbr_base_ptr(ptr / 16, length);
	ft_putchar(HEXA[ptr % 16]);
	return (*length += 1);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	length;

	length = ft_putstr("0x");
	if (ptr == 0)
		length += ft_putchar('0');
	else
	{
		ft_putnbr_base_ptr(ptr, &length);
	}
	return (length);
}
