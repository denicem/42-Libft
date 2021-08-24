/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:58:46 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/24 15:29:09 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2)
{
  char *char_s1;
  char *char_s2;
  int i;

  char_s1 = (char *) s1;
  char_s2 = (char *) s2;
  i = 0;

  while (char_s1[i] != '\0' || char_s2[i] != '\0')
  {
    if (char_s1[i] > char_s2[i])
      return (1);
    else if (char_s1[i] < char_s2[i])
      return (-1);
    i++;
  }

  return (0);
}