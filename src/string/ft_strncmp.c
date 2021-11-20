/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:49:55 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:58:11 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n - 1 && *(s1 + i) && *(s1 + i) == *(s2 + i) && *(s2 + i))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
