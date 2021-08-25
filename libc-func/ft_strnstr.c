/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:40:26 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/25 20:44:48 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  char *res;
  size_t i;
  size_t j;

  res = NULL;
  i = 0;
  j = 0;
  while (i < len && haystack[i] != '\0')
  {
    if (haystack[i] == needle[j])
    {
      j++;
      res = (char *) haystack + i;
      while (needle[j])
      {
        if (needle[j] != haystack[i+j] || !haystack[i+j] || (i+j) >= len)
        {
          res = NULL;
          break; 
        }
        j++;
      }
    }
    if (res != NULL)
      break;
    i++;
  }

  return (res);
}