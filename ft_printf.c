/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:10:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/29 16:40:35 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int len;

	len = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += ft_format_type(*format, ap);
		}
		else
			len += ft_print_char(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

int main(void)
{
	char *c = "Bananas e abacaxis";
	int nchar = -(ft_printf("The string printed: %s\n", c));
	ft_printf("The number of chars printed are: %u\n", nchar);
	printf("The number of chars printed are: %u\n", nchar);
	ft_printf("The hexadecimal number in lower cases is: %x\n", nchar);
	ft_printf("The hexadecimal number in lower cases is: %X\n", nchar);
	return (0);
}
