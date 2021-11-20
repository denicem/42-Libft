/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:46:04 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/06 12:31:52 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		res[i] = f(i, *s);
		s++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
