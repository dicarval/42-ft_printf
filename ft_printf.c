/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:10:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/25 17:40:21 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*(format++) == '%')
		{
			len += format_type(*format, ap)
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
