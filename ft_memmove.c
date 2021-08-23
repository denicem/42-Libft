/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:20:03 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/23 19:07:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  char *char_dst;
  char *char_src;
  size_t i;

  char_dst = (char *) dst;
  char_src = (char *) src;
  i = 0;

  while (i < len)
  {
    if (char_dst [i] == '\0' || char_src[i] == '\0')
      break;
    char_dst[i] = char_src[i];
    i++;
  }  

  return (dst);
}