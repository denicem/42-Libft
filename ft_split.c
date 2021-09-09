/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:16:10 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 19:35:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeMem(char **res, int pos)
{
	while (pos >= 0)
	{
		free(res[pos]);
		pos--;
	}
	free(res);
}

static int	ft_insertStr(char const *s, char c, char **res)
{
	int	str_len;
	int	i;

	i = 0;
	while (*s != '\0')
	{
		str_len = 0;
		while (*s != c && *s != '\0')
		{
			str_len++;
			s++;
		}
		res[i] = (char *) malloc(sizeof(char) * str_len + 1);
		if (res[i] == NULL)
		{
			ft_freeMem(res, i);
			return (0);
		}
		ft_strlcpy(res[i], s - str_len, str_len + 1);
		i++;
		while (*s == c && *s != '\0')
			s++;
	}
	res[i] = 0;
	return (1);
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
		if (*s == '\0')
			break ;
		while (*s == c)
			s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	res = (char **) malloc(sizeof(char *) * ft_getArrSize(s, c));
	if (res == NULL)
		return (NULL);
	if (!ft_insertStr(s, c, res))
		return (NULL);
	return (res);
}
