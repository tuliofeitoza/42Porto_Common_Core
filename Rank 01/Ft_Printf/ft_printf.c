/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:11:22 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/30 02:05:17 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(const char *content, va_list args, size_t *i);

int	ft_printf(const char *content, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, content);
	ft_check(content, args, &i);
	va_end(args);
	return (i);
}

void	ft_check(const char *content, va_list args, size_t *i)
{
	while (*content)
	{
		if (*content == '%')
		{
			content++;
			if (*content == 'c')
				ft_putchar(va_arg(args, int), i);
			else if (*content == 's')
				ft_putstr(va_arg(args, char *), i);
			else if (*content == 'd' || *content == 'i')
				ft_putnbr(va_arg(args, int), i);
			else if (*content == 'u')
				ft_putnbr_unsigned(va_arg(args, unsigned int), i);
			else if (*content == 'x' || *content == 'X')
				ft_puthex(va_arg(args, unsigned int), i, content);
			else if (*content == 'p')
				ft_putpoint(va_arg(args, unsigned long), i);
			else if (*content == '%')
				ft_putchar('%', i);
		}
		else
			ft_putchar(*content, i);
		content++;
	}
}
