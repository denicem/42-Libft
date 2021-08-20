/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:30:40 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/20 15:14:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  char *res;
  int i;

  i = 0;
  res = NULL;
  while (s[i] != '\0')
  {
    if (s[ft_strlen(s) - 1 - i] == c)
    {
      res = &s[ft_strlen(s) - 1 - i];
      break;
      //return (res);
    }
    i++;
  }
  return (res);
}