/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:17:06 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/11 20:04:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst != NULL)
	{
		current = *lst;
		next = NULL;
		while (current != NULL)
		{
			next = current->next;
			del(current);
			current = next;
		}
		*lst = NULL;
	}
}
