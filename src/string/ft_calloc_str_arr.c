/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_str_arr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:40 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/23 15:25:17 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	**ft_calloc_str_arr(size_t count)
{
	char	**res;

	res = malloc(count * sizeof(char *));
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * sizeof(char *));
	return (res);
}
