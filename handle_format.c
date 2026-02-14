/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:33:11 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/14 18:39:47 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	handle_format(char c, va_list args)
{
	int		count;
	char	ch;
	char	*str;

	count = 0;
	if (c == 'c')
	{
		ch = (char)va_arg(args, int);
		count += write(1, &ch, 1);
	}
	else if (c == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		while (*str)
			count += write(1, str++, 1);
	}
	else if (c == 'd' || c == 'i')
		count += print_nbr(va_arg(args, int));
	else if (c == 'p')
		count += print_add(va_arg(args, void *));
	else if (c == 'x')
		count += print_hex_low(va_arg(args, unsigned int));
	else if (c == 'X')
		count += print_hex_upp(va_arg(args, unsigned int));
	else if (c == 'u')
		count += unsigned_decimal(va_arg(args, unsigned int));
	else if (c == '%')
		count += write(1, "%", 1);
	return (count);
}
