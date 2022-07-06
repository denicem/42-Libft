/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:16:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/06 19:26:23 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	sb_copy_oldstr(t_stringbuilder *sb, char **newstr)
{
	int	i;

	i = 0;
	while (sb->str[i] && i < sb->len)
	{
		(*newstr)[i] = sb->str[i];
		i++;
	}
}

char	*sb_get_str(t_stringbuilder *sb)
{
	char	*res;
	int		i;
	int		extra_mem;

	if (!sb)
		return (NULL);
	extra_mem = 0;
	if (!sb->len)
		extra_mem++;
	res = ft_calloc(sb->len + extra_mem, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (sb->str[i] && i < sb->len)
	{
		res[i] = sb->str[i];
		i++;
	}
	return (res);
}
