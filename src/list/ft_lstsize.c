/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:34:12 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 22:04:03 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

int	ft_lstsize(t_list *lst)
{
	int	res;

	res = 0;
	while (lst != NULL)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}
