/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:56:11 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/14 18:40:13 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print_nbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		print_char('-');
		count += 1;
	}
	if (n > 9)
	{
		count += print_nbr(n / 10);
	}
	c = (n % 10) + '0';
	count += print_char(c);
	return (count);
}
