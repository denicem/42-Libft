/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:22:36 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 19:23:18 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

char	*get_next_line(int fd);
int		prepareVars(int fd, char **storage, char **readbuf, char **res);
char	*readLine(int fd, char **storage, char **readbuf, char **res);
char	*getRes(char **storage, char **readbuf, char **res);
char	*ft_strjoin_gnl(char *s1, char *s2, int len_s2);

#	endif
