/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:47:05 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/24 16:27:57 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGBUILDER_H
# define STRINGBUILDER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

# define SUCCESS_SB 0
# define FAILURE_SB 1

typedef struct s_stringbuilder
{
	char	*str;
	int		len;
}	t_stringbuilder;

t_stringbuilder	*sb_create(void);
int				sb_clear(t_stringbuilder *sb);
int				sb_destroy(t_stringbuilder **sb);
void			sb_copy_oldstr(t_stringbuilder *sb, char **newstr);

int				sb_append_char(t_stringbuilder *sb, char c);
int				sb_append_str(t_stringbuilder *sb, char *str);
int				sb_append_strn(t_stringbuilder *sb, char *str, int len);
int				sb_append_int(t_stringbuilder *sb, int nbr);
char			*sb_get_str(t_stringbuilder *sb);

#	endif