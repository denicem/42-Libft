/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:00:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/28 18:44:23 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t res_size;
  size_t i;
  size_t j;

  if (!dstsize || !ft_strlen(src))
    return ft_strlen(dst);
  res_size = ft_strlen(dst) + ft_strlen(src);
  i = ft_strlen(dst);
  j = 0;
  while (i < (dstsize - 1) && src[j])
  {
    dst[i] = src[j];
    i++;
    j++;
  }
  dst[i] = '\0';

  return (res_size);
}
