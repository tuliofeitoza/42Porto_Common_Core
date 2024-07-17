/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:20:41 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/02 01:29:01 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if ((char )c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int	main(void)
{
    printf("%s", ft_strchr("Hello, Word", 'o'));
}
*/