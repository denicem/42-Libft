/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:04 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/15 19:30:07 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_skipSpaces(const char *str)
// {
// 	while (*str == ' ' || (*str >= '\b' && *str <= '\r'))
// 		str++;
// }

// static int	ft_isWhitespace(char c)
// {
// 	if (c == ' ' || (*str >= '\b' && *str <= '\r'))
		
// }

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	if (!ft_strlen(str))
		return (0);
	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\b' && *str <= '\r') || *str == '-' || *str == '+')
	{
		if (*str == '-' || *str == '+' || ft_isdigit(*str))
		{
			if (*str == '-' || *str == '+')
			{
				if (*str == '-')
					sign = -1;
				str++;
			}
			break ;
		}
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (!ft_isdigit(*str))
			break ;
		res = res * 10 + (ft_isdigit(*str) - '0');
		if (sign == -1 && res >= INT_MAX)
			return (INT_MIN);
		else if (res >= INT_MAX)
			return (INT_MAX);
		str++;
	}
	return (res * sign);
}
