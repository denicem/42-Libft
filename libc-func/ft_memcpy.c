/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:02:52 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/23 15:46:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  char *char_dst;
  char *char_src;
  size_t i;

  char_dst = (char *) dst;
  char_src = (char *) src;
  i = 0;

  while (i < n)
  {
    if(char_dst[i] == '\0' || char_src[i] == '\0')
      break;
    char_dst[i] = char_src[i];
    i++;
  }

  return (dst);
}