/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:16:10 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/07 18:41:05 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocStr(int size)
{
	char *res;

	res = malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size + 1);

	return (res);
}

static int	ft_getArrSize(char const *s, char c)
{
	int	res;

	res = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
			s++;
		res++;
		while (*s == c)
			s++;
		s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		str_len;
	int		i;
	
	if (s == NULL || c == '\0')
		return (NULL);
	while (*s == c)
		s++;
	res = malloc(sizeof(char *) * ft_getArrSize(s, c) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		str_len = 0;
		while (*s != c && *s != '\0')
		{
			str_len++;
			s++;
		}
		*(res + i) = ft_allocStr(str_len);
		ft_strlcpy(*(res + i), s - str_len, str_len + 1);
		i++;
		while (*s == c)
			s++;
	}
	*(res + i) = 0;
	return (res);
}
