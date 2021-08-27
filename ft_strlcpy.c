/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:41:13 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/27 21:31:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
  size_t dst_size;
  size_t src_size;
  size_t i;

  dst_size = ft_strlen(dst);
  src_size = ft_strlen(src);
  i = 0;
  if (dstsize > 0)
  {  
    while (i < dstsize - 1 && src[i] != '\0')
    {
      dst[i] = src[i];
      i++;
    }
    if (dst_size > 0)
      dst[i] = '\0';
  } 
  return (src_size);
}
