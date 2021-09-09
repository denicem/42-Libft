/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:01:16 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:49:27 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	byte_size;

	byte_size = ft_strlen(s1) + 1;
	res = malloc(byte_size);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, byte_size);
	return (res);
}
