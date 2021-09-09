/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:40:26 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:55:00 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_help(const char *hay, const char *nee, size_t restLen)
{
	char	*res;
	size_t	i;

	res = (char *)hay;
	i = 0;
	while (*nee)
	{
		if (*nee != *hay || i >= restLen || !(*hay))
		{
			res = NULL;
			break ;
		}
		nee++;
		hay++;
		i++;
	}
	return (res);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*res;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	res = NULL;
	i = 0;
	while (i < len && *haystack && *needle)
	{
		if (*haystack == *needle)
		{
			res = ft_help(haystack, needle, len - i);
			break ;
		}
		i++;
		haystack++;
	}
	return (res);
}
