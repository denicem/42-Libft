/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:00:32 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/01 22:00:49 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t dst_len;
  size_t src_len;
  size_t i;

  dst_len = ft_strlen(dst);
  src_len = ft_strlen(src);
  i = 0;

  if (dst_len > dstsize)
    return 0;

  return (dst_len + src_len);
}
