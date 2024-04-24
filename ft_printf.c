/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:10:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/24 17:02:34 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
	va_list ap;
	int len;

	len = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*(++format) == '%')
		{
			if (*format == 'c')
				len += print_char(va_arg(ap, char), 1);
			else if (*format == 's')
				len += print_string(va_arg(ap, char *));
			else if (*format == 'p')
				len += print_string(va_arg(ap, char *));
			else if (*format == 'd' || *format == 'i')
				len += print_digit(va_arg(ap, int));
			else if (*format == 'u')
				len += print_digit(va_arg(ap, int));
			else if (*format == 'x')
				len += print_hexa(va_arg(ap, int), 'x');
			else if (*format == 'X')
				len += print_hexa(va_arg(ap, int), 'X');
			else if (*format == '%')
				len += print_char(va_arg(ap, char));
			format++;
		}
		else
			len += print_char(va_arg(ap, char));
		format++;
	}
	va_end(ap);
	return (len);
}

int main(void)
{
	char c = 'C';
	ft_printf("The character is %c", c);
	return (0);
}
