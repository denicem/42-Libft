/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:59:23 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/23 14:01:57 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlen_arr(const char **str_arr)
{
	int res;

	res = 0;
	while (*str_arr)
	{
		res++;
		str_arr++;
	}
	return (res);
}