/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:29:55 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/27 22:05:13 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res;
    
    res = (char *) malloc(len + 1);
    ft_strlcpy(res, s + start, len + 1);

    return (res);
}