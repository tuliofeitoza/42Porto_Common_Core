/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:21:19 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/30 00:49:12 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, size_t *i)
{
	if (n >= 10)
		ft_putnbr_unsigned((n / 10), i);
	ft_putchar(((n % 10) + '0'), i);
}
