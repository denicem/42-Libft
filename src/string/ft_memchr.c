/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:09:12 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 17:44:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*char_s;
	unsigned char	val;
	size_t			i;

	char_s = (char *) s;
	val = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) char_s[i] == val)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
