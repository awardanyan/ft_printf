/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:09:11 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/14 18:40:24 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	unsigned_decimal(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb > 9)
		count += unsigned_decimal(nb / 10);
	c = (nb % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
