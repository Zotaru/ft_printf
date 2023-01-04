#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "unistd.h"

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_conversion(va_list ptr, char c);
int ft_putstr(char *str);

#endif