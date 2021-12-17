/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:20:03 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 17:44:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char	*ft_rev_memmove(char *dst, const char *src, size_t len)
{
	while (len)
	{
		*(dst + len - 1) = *(src + len - 1);
		len--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	char_dst = (char *) dst;
	char_src = (char *) src;
	if (dst > src)
		ft_rev_memmove(char_dst, char_src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
