/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 02:35:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 18:45:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

int		ft_printf(const char *format, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *str);
int		ft_putnbr_pf(int nbr, int flag);
int		ft_putnbr_base_pf(unsigned long nbr, char *set, unsigned int base, int f);
int		ft_putaddr_pf(void *addr);

enum	e_flag {
	noflag,
	space,
	plus,
	hash
};

#	endif