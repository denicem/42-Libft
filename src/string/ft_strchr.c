/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:17:12 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 20:07:33 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/string.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			res = (char *) s + i;
			break ;
		}
		i++;
	}
	if (s[i] == (char) c)
		res = (char *) s + i;
	return (res);
}
