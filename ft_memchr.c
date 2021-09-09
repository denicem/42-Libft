/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:09:12 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:57:24 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*res;
	size_t	i;
	char	val;
	char	*char_s;

	i = 0;
	res = NULL;
	val = (char) c;
	char_s = (char *) s;
	while (i < n)
	{
		if (char_s[i] == val)
		{
			res = (void *) s + i;
			break ;
		}
		i++;
	}
	return (res);
}
