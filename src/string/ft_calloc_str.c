/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:16:33 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/23 15:17:39 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_calloc_str(size_t count)
{
	char	*res;

	res = malloc(count * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * sizeof(char));
	return (res);
}
