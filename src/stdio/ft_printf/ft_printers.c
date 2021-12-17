/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 00:44:17 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 18:47:49 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include	"../../../inc/libft.h"

# include	<unistd.h>
# include	<limits.h>

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_pf(char *str)
{
	int	res;

	if (str == NULL)
	{
		res = write(1, "(null)", 6);
		return (res);
	}
	res = 0;
	while (*str)
		res += ft_putchar_pf(*str++);
	return (res);
}

int	ft_putnbr_pf(int nbr, int flag)
{
	int	res;

	res = 0;
	if (nbr >= 0 && flag == space)
		res += write(1, " ", 1);
	else if (nbr >= 0 && flag == plus)
		res += write(1, "+", 1);
	flag = noflag;
	if (nbr == INT_MIN)
	{
		res += write(1, "-2", 2);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		res += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		res += ft_putnbr_pf(nbr / 10, flag);
	res += ft_putchar_pf(nbr % 10 + 48);
	return (res);
}

int	ft_putnbr_base_pf(unsigned long nbr, char *set, unsigned int base, int f)
{
	int	res;

	if (f == hash && nbr > 0)
	{
		if (ft_strchr(set, 'A'))
			res = write(1, "0X", 2);
		else
			res = write(1, "0x", 2);
		f = noflag;
	}
	else
		res = 0;
	if (nbr >= base)
		res += ft_putnbr_base_pf(nbr / base, set, base, f);
	res += write(1, set + (nbr % base), 1);
	return (res);
}

int	ft_putaddr_pf(void *addr)
{
	int				res;
	unsigned long	addr_nbr;

	res = 0;
	addr_nbr = (unsigned long) addr;
	res += write(1, "0x", 2);
	res += ft_putnbr_base_pf(addr_nbr, "0123456789abcdef", 16, noflag);
	return (res);
}
