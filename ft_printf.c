/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:10:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/05/03 10:58:09 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

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
	char		*c = "Bananas e abacaxis";
	int	n = 124;
	char s = 's';
	//long int	min = LONG_MIN;
	//long int	max = LONG_MAX;
	int nadress = ft_printf("%p\n", c);
	printf("%p\n",c);
	ft_printf("%p\n", &c);
	ft_printf("%p\n", n);
	ft_printf("%p\n", s);
	//printf("%p\n",n);
	ft_printf("The number of chars printed are: %u\n", nadress);
	printf("The number of chars printed are: %u\n", nadress);
	ft_printf("The char printed is the %% sign\n");
	printf("The char printed is the %% sign\n");
	ft_printf("%z sign\n", c);
	return (0);
}
