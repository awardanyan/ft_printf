/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:52:53 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/14 18:41:19 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print_hex_add(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += print_hex_add(n / 16);
	count += write(1, &hex[n % 16], 1);
	return (count);
}

int	print_add(void *p)
{
	int				count;
	unsigned long	add;

	count = 0;
	add = (unsigned long)p;
	if (p++ == 0 || !p)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	count += write(1, "0x", 2);
	count += print_hex_add(add);
	return (count);
}
