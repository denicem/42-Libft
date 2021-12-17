/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:38:14 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 18:31:45 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

#include <limits.h>

static void	ft_insertStr(char *res, int n, int i, int res_len)
{
	if (n == INT_MIN)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		res[i] = '-';
		n *= -1;
	}
	if (n > 9)
		ft_insertStr(res, n / 10, i + 1, res_len);
	res[res_len - 1 - i] = '0' + (n % 10);
}

static int	ft_countStrLen(int n)
{
	int	res;

	if (n == INT_MIN)
		return (11);
	if (n == 0)
		return (1);
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
	int		res_len;
	char	*res;

	res_len = ft_countStrLen(n);
	res = (char *) malloc(res_len + 1);
	if (res == NULL)
		return (NULL);
	ft_insertStr(res, n, 0, res_len);
	res[res_len] = '\0';
	return (res);
}
