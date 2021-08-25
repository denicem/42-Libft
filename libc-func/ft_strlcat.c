/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:00:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/23 18:13:18 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  while (dst[i])
    i++;
  while (i < (dstsize - 1))
  {
    dst[i] = src[j];
    i++;
    j++;
  }
  dst[i] = '\0';
  while (src[j] != '\0')
  {
    j++;
    i++;
  }

  return (i);
}