/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:30:40 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/26 20:15:28 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  char *res;
  int i;
  int s_size;

  

  res = NULL;
  i = 0;
  s_size = ft_strlen(s);
  while (s[i] > s_size)
  {
    if (!s[s_size - 1 - i])
      break;
    if (s[s_size - 1 - i] == c)
    {
      res = (char *) s + s_size - 1 - i;
      break;
    }
    i++;
  }
  if (s[s_size - 1 - i] == c)
    res = (char *) s + s_size - 1 - i;

  return (res);
}