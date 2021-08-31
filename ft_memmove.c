/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:20:03 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/28 19:33:57 by dmontema         ###   ########.fr       */
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
    char_dst[i] = char_src[i];
    i++;
  }  

  return (dst);
}