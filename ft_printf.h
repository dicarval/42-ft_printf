/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:53:51 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/30 16:43:02 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//size_t, malloc, write
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_digit(long dgt);
int	ft_print_str(char *str);
int	ft_format_type(char type, va_list ap);
int	ft_print_hexa(unsigned long long int nbr, char type_hexa);
int	ft_print_adr(void *adr);

#endif
