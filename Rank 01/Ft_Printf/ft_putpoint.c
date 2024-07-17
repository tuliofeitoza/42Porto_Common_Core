/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:22:00 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/30 00:25:22 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptrnbr(unsigned long n, size_t *i);

void	ft_putpoint(unsigned long n, size_t *i)
{
	if (n == 0)
	{
		write(1, "(nil)", 5);
		*i += 5;
		return ;
	}
	write(1, "0x", 2);
	*i += 2;
	ft_putptrnbr(n, i);
}

static void	ft_putptrnbr(unsigned long n, size_t *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putptrnbr(n / 16, i);
	ft_putchar(base[n % 16], i);
}
