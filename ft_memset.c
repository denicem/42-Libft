/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:22:04 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/18 17:38:06 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
  unsigned char *p;
  unsigned char x;

  p = b;
  x = c;
  while (len)
  {
    *p = x;
    p++;
    len--;
  }
  
  return (b);
}
