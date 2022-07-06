/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:04 by dmontema          #+#    #+#             */
/*   Updated: 2022/04/25 00:23:55 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../../inc/libft.h"

static int	ft_isWhitespace(char c)
{
	if (c == ' ' || (c >= '\b' && c <= '\r'))
		return (1);
	return (0);
}

static int	ft_calcRes(const char *str, int sign)
{
	int	res;

	res = 0;
	while (ft_isdigit(*str))
	{
		if (sign == -1 && res >= INT_MAX)
			return (INT_MIN);
		else if (res >= INT_MAX)
			return (INT_MAX);
		res = res * 10 + (ft_isdigit(*str) - '0');
		str++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	if (!ft_strlen(str))
		return (0);
	res = 0;
	sign = 1;
	while (ft_isWhitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = ft_calcRes(str, sign);
	return (res * sign);
}
