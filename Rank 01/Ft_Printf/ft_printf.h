/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:11:57 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/30 02:05:31 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *content, ...);
void	ft_putchar(char c, size_t *i);
void	ft_putstr(const char *str, size_t *i);
void	ft_putnbr(int n, size_t *i);
void	ft_putnbr_unsigned(unsigned int n, size_t *i);
void	ft_puthex(unsigned int n, size_t *i, const char *content);
void	ft_putpoint(unsigned long n, size_t *i);

#endif