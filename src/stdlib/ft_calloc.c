/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:52:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/09 20:37:53 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	byte_size;

	byte_size = count * size;
	res = malloc(byte_size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, byte_size);
	return (res);
}
