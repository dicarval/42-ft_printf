/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:14:16 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/30 16:43:02 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adr(void *adr)
{
	if(!adr)
		return (ft_print_str("0x0"));
	else
	return ((ft_print_str("0x") + ft_print_hexa((unsigned long long)adr,'x')));
}
