/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:19:23 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/17 20:13:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*lst_cpy;
	t_list	*curr;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (res == NULL)
		return (NULL);
	lst_cpy = lst;
	while (lst_cpy != NULL)
	{
		curr = ft_lstnew(f(lst_cpy->content));
		if (curr == NULL)
		{
			ft_lstclear(&res, del);
			free(res);
			return (NULL);
		}
		ft_lstadd_back(&res, curr);
		lst_cpy = lst_cpy->next;
	}
	return (res);
}
