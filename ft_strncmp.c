/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:49:55 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/20 19:29:10 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  char *str1;
  char *str2;
  size_t i;

  str1 = (char *) s1;
  str2 = (char *) s2;
  i = 0;

  while (i < n)
  {
    if (str1[i] > str2[i])
      return (1);
    else if (str1[i] < str2[i])
      return (-1);
    i++;
  }
    
  return (0);
}