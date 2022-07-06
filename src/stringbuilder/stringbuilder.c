/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/06 19:26:27 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_stringbuilder	*sb_create(void)
{
	t_stringbuilder	*sb;

	sb = ft_calloc(1, sizeof(t_stringbuilder));
	if (!sb)
		return (NULL);
	sb->str = ft_calloc(1, sizeof(char));
	if (!sb->str)
	{
		free(sb);
		return (NULL);
	}
	sb->len = 0;
	return (sb);
}

int	sb_clear(t_stringbuilder *sb)
{
	free(sb->str);
	sb->str = ft_calloc(1, sizeof(char));
	sb->len = 0;
	if (!sb->str)
	{
		free(sb);
		return (FAILURE);
	}
	return (SUCCESS);
}

int	sb_destroy(t_stringbuilder **sb)
{
	free((*sb)->str);
	(*sb)->str = NULL;
	(*sb)->len = 0;
	free(*sb);
	*sb = NULL;
	return (SUCCESS);
}
