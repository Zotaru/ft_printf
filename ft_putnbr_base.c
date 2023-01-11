/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:47:22 by amonier           #+#    #+#             */
/*   Updated: 2023/01/11 23:12:15 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base(char *base, int para)
{
	int	len;
	int	len_base;

	len_base = ft_strlen(base);
	len = 0;
	if (para < 0)
	{
		ft_putchar('-');
		len++;
		para = para * (-1);
	}
	if (para >= 0 && para < len_base)
	{
		ft_putchar(base[para]);
		len++;
	}
	else if (para >= len_base)
	{
		len += ft_putnbr_base(base, para / len_base);
		len += ft_putnbr_base(base, para % len_base);
	}
	return (len);
}
