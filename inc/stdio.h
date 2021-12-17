/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:13:45 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 18:05:10 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDIO_H
# define	STDIO_H

// stdio TODO: add ft_printf, gnl and add the normal put funcs (e.g putchar, ...)
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#	endif
