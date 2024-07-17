/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:37:28 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/07/17 20:44:33 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != "\0")
	{
		i++;
	}
	return (i);
}

char	*strdup(const char *str)
{
	char *strcopy;
	size_t len;
	size_t i;

	len = ft_strlen(str);
	strcopy = (char *)malloc((len + 1) * sizeof(char));
	if (strcopy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strcopy[i] = str[i];
		i++;
	}
	strcopy[len] = '\0';
	return (strcopy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;
	size_t	i;
	size_t	j;
	
	len = ft_strlen(s1) + ft_strlen(s2);
	
	join = (char *)malloc((len + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];		
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join[len] = '\0';
	return (join);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return((char *)s);
		
	return (NULL);
}
