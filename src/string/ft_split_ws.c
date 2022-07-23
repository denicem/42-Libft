/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_ws.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:16:10 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/23 02:36:38 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

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

static int	ft_insArr(const char *s, char **res)
{
	int	str_len;
	int	arr_pos;
	int	s_pos;

	arr_pos = 0;
	s_pos = 0;
	while (s[s_pos] != '\0')
	{
		str_len = 0;
		while (!ft_isspace(s[s_pos]) && s[s_pos] != '\0')
		{
			s_pos++;
			str_len++;
		}
		res[arr_pos] = ft_substr(s, s_pos - str_len, str_len);
		if (res == NULL)
			return (freeMem(res, arr_pos));
		while (ft_isspace(s[s_pos]) && s[s_pos] != '\0')
			s_pos++;
		arr_pos++;
	}
	res[arr_pos] = 0;
	return (1);
}

static int	ft_getArrSize(const char *s)
{
	int	res;

	res = 0;
	while (*s != '\0')
	{
		while (!ft_isspace(*s) && *s != '\0')
			s++;
		res++;
		while (ft_isspace(*s) && *s != '\0')
			s++;
	}
	return (res);
}

char	**ft_split_ws(char const *s)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	while (ft_isspace(*s) && *s != '\0')
		s++;
	if (*s == '\0')
	{
		res = malloc (sizeof(char *));
		if (res == NULL)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = malloc(sizeof(char *) * (ft_getArrSize(s) + 1));
	if (res == NULL)
		return (NULL);
	if (!ft_insArr(s, res))
	{
		res = malloc (sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	return (res);
}
