/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:30:40 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 20:07:33 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/string.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		i;
	int		s_size;

	res = NULL;
	i = 0;
	s_size = ft_strlen(s) + 1;
	while (i < s_size)
	{
		if (s[s_size - 1 - i] == (char) c)
		{
			res = (char *) s + s_size - 1 - i;
			break ;
		}
		i++;
	}
	return (res);
}
