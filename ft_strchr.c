/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:17:12 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/20 15:09:54 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  char *res;
  int i;

  i = 0;
  res = NULL;
  while (s[i] != '\0')
  {
    if (s[i] == c)
    {
      res = s+i;
      return (res);
    }
    i++;
  }
  return (res);
}