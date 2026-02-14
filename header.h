/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:12:51 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/14 18:40:35 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	print_nbr(int numb);
int	print_char(char c);
int	print_hex_low(unsigned int n);
int	print_hex_upp(unsigned int n);
int	print_add(void *p);
int	unsigned_decimal(unsigned int nb);
int	handle_format(char c, va_list args);

#endif
