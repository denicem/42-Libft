/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:19:23 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 17:47:15 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*curr;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		curr = ft_lstnew(f(lst->content));
		if (curr == NULL)
		{
			ft_lstclear(&res, del);
			free(res);
			return (NULL);
		}
		ft_lstadd_back(&res, curr);
		lst = lst->next;
	}
	return (res);
}
