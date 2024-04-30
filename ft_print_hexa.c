/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:44:52 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/30 16:47:52 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexaupper(long int nbr, int base)
{
	char	*ABC;
	int		len;

	len = 0;
	ABC = "0123456789ABCDEF";
	if( nbr < base)
	{
		return ft_print_char(ABC[nbr]);
	}
	else
	{
		len += ft_print_hexaupper(nbr / base, base);
		len += ft_print_hexaupper(nbr % base, base);
	}
	return len;
}

int	ft_print_hexalower(long int nbr, int base)
{
	char	*abc;
	int		len;

	len = 0;
	abc = "0123456789abcdef";
	if( nbr < base)
	{
		return ft_print_char(abc[nbr]);
	}
	else
	{
		len += ft_print_hexalower(nbr / base, base);
		len += ft_print_hexalower(nbr % base, base);
	}
	return len;

}

int	ft_print_hexa(unsigned long long int nbr, char type_hexa)
{
	int		len;
	int		base;

	base = 16;
	len = 0;
	if (type_hexa == 'X')
		len = ft_print_hexaupper(nbr, base);
	if (type_hexa == 'x')
		len = ft_print_hexalower(nbr, base);
	return len;
}
