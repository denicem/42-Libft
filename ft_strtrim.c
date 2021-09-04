/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:13:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/04 20:21:06 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_cInSet(char c, char const *set)
// {
// 	while (*set)
// 	{
// 		if (c == *set)
// 			return (0);
// 		set++;
// 	}
// 	return (1);
// }

// static int	ft_newStrSize(char const *s, char const *set)
// {
// 	int res;

// 	res = 0;
// 	while (*s)
// 	{
// 		if (ft_cInSet(*s, set))
// 			res++;
// 		s++;
// 	}
// 	return (res);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;

	res = malloc(ft_strlen(s1) + 1);
	i = 0;
	while (*s1)
	{
		if (ft_strrchr(set, *s1) == NULL)
		{
			*(res + i) = *s1;
			i++;
		}
		s1++;
	}
	*(res + i) = '\0';
	
	return (res);
}