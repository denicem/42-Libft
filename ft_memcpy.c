/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:02:52 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/01 18:59:49 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  char *char_dst;
  char *char_src;
  size_t i;

  if (!ft_strlen(src) ||  !ft_strlen(dst))
    return NULL;

  char_dst = dst;
  char_src = (char *) src;
  i = 0;

  while (i < n)
  {
    char_dst[i] = char_src[i];
    i++;
  }

  return (dst);
}