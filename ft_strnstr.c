/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:40:26 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/19 17:27:54 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *) hay);
	i = 0;
	while (hay[i])
	{
		j = 0;
		if (hay[i] == needle[j])
		{
			while (hay[i + j] == needle[j] && i + j < len && hay[i + j])
			{
				if (needle[j + 1] == '\0')
					return ((char *) hay + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
