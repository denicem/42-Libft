/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:01:16 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/18 17:18:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	i;
	size_t	byte_size;

	byte_size = ft_strlen(s1);
	res = malloc(byte_size + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < byte_size)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
