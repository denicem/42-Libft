/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:32:59 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 17:44:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res_size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(res_size + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, res_size + 1);
	return (res);
}
