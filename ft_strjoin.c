/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:32:59 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/28 18:54:06 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t res_size;
    //size_t i;

    res_size = ft_strlen(s1) + ft_strlen(s2);
    res = (char *) malloc(res_size + 1);
    //i = 0;
    if (res)
    {
        ft_strlcpy(res, s1, ft_strlen(s1));
        ft_strlcat(res, s2, sizeof(char) * res_size);
    }

    /*while (s1)
    {
        res[i] = *s1;
        s1++;
        i++;
    }
    while (s2)
    {
        res[i] = *s2;
        s2++;
        i++;
    }
    res[i] = '\0';*/

    return res;
}