/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder_append.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:19:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/28 19:19:25 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/libft.h"

int	sb_append_char(t_stringbuilder *sb, char c)
{
	char	*tmp;
	char	*newstr;

	if (!c)
		return (FAILURE);
	newstr = ft_calloc(sb->len + 2, sizeof(char));
	if (!newstr)
		return (FAILURE);
	sb_copy_oldstr(sb, &newstr);
	newstr[(sb->len)++] = c;
	tmp = sb->str;
	sb->str = newstr;
	free(tmp);
	return (SUCCESS);
}

int	sb_append_str(t_stringbuilder *sb, char *str)
{
	char	*tmp;
	int		i;
	char	*newstr;

	if (!str)
		return (FAILURE);
	newstr = ft_calloc(sb->len + ft_strlen(str) + 1, sizeof(char));
	if (!newstr)
		return (FAILURE);
	sb_copy_oldstr(sb, &newstr);
	i = 0;
	while (str[i])
	{
		newstr[sb->len + i] = str[i];
		i++;
	}
	sb->len += i;
	tmp = sb->str;
	sb->str = newstr;
	free(tmp);
	return (SUCCESS);
}

int	sb_append_strn(t_stringbuilder *sb, char *str, int len)
{
	char	*tmp;
	int		i;
	char	*newstr;

	if (!str)
		return (FAILURE);
	newstr = ft_calloc(sb->len + len + 1, sizeof(char));
	if (!newstr)
		return (FAILURE);
	sb_copy_oldstr(sb, &newstr);
	i = 0;
	while (str[i] && i < len)
	{
		newstr[sb->len + i] = str[i];
		i++;
	}
	sb->len += i;
	tmp = sb->str;
	sb->str = newstr;
	free(tmp);
	return (SUCCESS);
}

int	sb_append_int(t_stringbuilder *sb, int nbr)
{
	char	*nbr_str;

	nbr_str = ft_itoa(nbr); //handle nbr over INT_MAX
	if (!nbr_str)
		return (FAILURE);
	if (sb_append_str(sb, nbr_str))
	{
		free(nbr_str);
		nbr_str = NULL;
		return (FAILURE);
	}
	free(nbr_str);
	nbr_str = NULL;
	return (SUCCESS);
}
