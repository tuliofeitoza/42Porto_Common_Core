/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:58:27 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/30 02:05:22 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, size_t *i, const char *content)
{
	char	*str;
	
	if (*content == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, i, content);
	ft_putchar(str[n % 16], i);
}
