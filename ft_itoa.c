/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:38:14 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/03 18:54:00 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countByte(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	while (n)
	{
		res++;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		res_len;

	i = 0;
	res_len = ft_countByte(n) + 1;
	res = malloc(res_len);
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[i] = '-';
		n *= -1;
	}
	i++;
	while (n)
	{
		res[res_len - 1 - i] = '0' + (n % 10);
		n /= 10;
		if (i < res_len - 1)
			i++;
	}
	res[i] = '\0';
	return (res);
}
