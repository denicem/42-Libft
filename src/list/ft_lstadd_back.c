/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:00:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 17:47:15 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (new != NULL || lst != NULL)
	{
		l = ft_lstlast(*lst);
		if (l == NULL)
			*lst = new;
		else
			l->next = new;
	}
}
