/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:16:10 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/21 14:19:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	freeMem(char **arr, int pos)
{
	while (pos >= 0)
	{
		free(arr[pos]);
		pos--;
	}
	free(arr);
	return (0);
}

static int	ft_insArr(const char *s, char c, char **res)
{
	int	str_len;
	int	arr_pos;
	int	s_pos;

	arr_pos = 0;
	s_pos = 0;
	while (s[s_pos] != '\0')
	{
		str_len = 0;
		while (s[s_pos] != c && s[s_pos] != '\0')
		{
			s_pos++;
			str_len++;
		}
		res[arr_pos] = ft_substr(s, s_pos - str_len, str_len);
		if (res == NULL)
			return (freeMem(res, arr_pos));
		while (s[s_pos] == c && s[s_pos] != '\0')
			s_pos++;
		arr_pos++;
	}
	res[arr_pos] = 0;
	return (1);
}

static int	ft_getArrSize(const char *s, char c)
{
	int	res;

	res = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
			s++;
		res++;
		while (*s == c && *s != '\0')
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
	if (*s == '\0')
	{
		res = malloc (sizeof(char *));
		if (res == NULL)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = malloc(sizeof(char *) * (ft_getArrSize(s, c) + 1));
	if (res == NULL)
		return (NULL);
	if (!ft_insArr(s, c, res))
	{
		res = malloc (sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	return (res);
}
