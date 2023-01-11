/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:43:14 by amonier           #+#    #+#             */
/*   Updated: 2023/01/11 23:07:56 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define HEXA_MIN "0123456789abcdef"
# define HEXA_MAJ "0123456789ABCDEF"

int	ft_strlen(char *str);
int	ft_putnbr_base(char *base, int para);

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_conversion(va_list ptr, char c);
int ft_putstr(char *str);

#endif
