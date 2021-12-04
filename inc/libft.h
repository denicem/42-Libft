/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:31:48 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 21:42:24 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define	LIBFT_H

# include	<stdlib.h>
# include	<unistd.h>
# include	<string.h>
# include	<limits.h>

# include "ctype.h"

// stdio TODO: put to seperate header; add ft_printf, gnl and add the normal put funcs (e.g putchar, ...)
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

# include "stdlib.h"
# include "string.h"
# include "list.h"

#	endif
