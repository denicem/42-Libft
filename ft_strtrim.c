/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:13:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/06 17:43:43 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getStartIndex(char const *s1, char const *set)
{
	int	res;

	res = 0;
	while (ft_strchr(set, *(s1 + res)))
		res++;
	return (res);
}

static int	ft_getEndIndex(char const *s1, char const *set)
{
	int	res;
	int	s_len;

	res = 0;
	s_len = (int) ft_strlen(s1);
	while (ft_strchr(set, *(s1 + (s_len - 1 - res))))
		res++;
	res = s_len - 1 - res;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		s1_len;

	if (s1 == NULL)
		return (NULL);
	s1_len = (int) ft_strlen(s1);
	if (set == NULL || !s1_len || !ft_strlen(set))
		return ((char *) s1);
	res = malloc(s1_len + 1);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, s1_len + 1);
	start = ft_getStartIndex(s1, set);
	end = ft_getEndIndex(s1, set) - start;
	if (start > end)
		return (res);
	res = ft_substr(s1, start, end + 1);
	return (res);
}
