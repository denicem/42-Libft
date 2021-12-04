/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:14:01 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 18:10:18 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ctype.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = 'A' + c - 'a';
	return (c);
}
