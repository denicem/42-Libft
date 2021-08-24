/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:04 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/24 18:54:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tothepow(int x, int y)
{
  int res;
  int i;

  if (!y)
    return 1;

  res = x;
  i = 0;
  while (i < (y-1))
  {
    res = res * x;
    i++;
  }

  return (res);
}

int ft_atoi(const char *str)
{
  int res;
  int i;
  int str_len;

  i = 0;
  res = 0;
  str_len = ft_strlen(str);
  while (str[i])
  {
    if (!ft_isdigit(str[i]))
      return 0;
    res = res + ft_tothepow(10, str_len-i-1) * (ft_isdigit(str[i]) - 48);
    i++;
  }
  
  return (res);
}