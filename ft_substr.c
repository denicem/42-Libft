/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:29:55 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:56:02 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	res = (char *) malloc(len + 1);
	if (s == NULL || res == NULL)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[i] != '\0' && len > 0)
		{
			res[i] = s[start + i];
			i++;
			len--;
		}
	}
	res[i] = '\0';
	return (res);
}
