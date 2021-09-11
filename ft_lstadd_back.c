/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:00:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/11 16:00:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *l;

	if (new != NULL)
	{
		l = ft_lstlast(*lst);
		if (l == NULL)
			//ft_lstadd_front(lst, new);
			*lst = new;
		else
			l->next = new;
	}
}
