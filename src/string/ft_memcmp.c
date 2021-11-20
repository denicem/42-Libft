/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:58:46 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/17 20:40:59 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	if (!n)
		return (0);
	char_s1 = (unsigned char *) s1;
	char_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n - 1 && char_s1[i] == char_s2[i])
		i++;
	return (char_s1[i] - char_s2[i]);
}
