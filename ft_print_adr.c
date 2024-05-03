/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:14:16 by dicarval          #+#    #+#             */
/*   Updated: 2024/05/03 09:57:51 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adr(unsigned long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (ft_print_str("(nil)"));
	else
	{
		len += ft_print_str("0x");
		len += ft_print_hexa(nbr, 'x');
	}
	return (len);
}
