/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:18:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/25 19:26:07 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	format_type(char type, va_list ap)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += print_char(va_arg(ap, int)); //promotion from char to int in variadic functions
	else if (type == 's')
		len += print_str(va_arg(ap, char *));
	else if (type == 'p')
		len += print_ptr(va_arg(ap, char *)); //check this one
	else if (type == 'd' || type == 'i')
		len += print_digit(va_arg(ap, int));
	else if (type == 'u')
		len += print_digit(va_arg(ap, unsigned int));
	else if (type == 'x')
		len += print_hexa(va_arg(ap, unsigned int), 'x');
	else if (type == 'X')
		len += print_hexa(va_arg(ap, unsigned int), 'X');
	else if (type == '%')
		len += print_char(va_arg(ap, char));
	return (len);
}
