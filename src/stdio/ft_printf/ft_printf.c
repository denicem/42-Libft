/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:07:33 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 18:47:04 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include	"../../../inc/libft.h"

# include	<stdlib.h>
# include	<stdarg.h>

static char	*get_flags(char **format)
{
	char	*res;
	int		i;

	i = 0;
	while (!ft_isalpha(*(*format + i)))
		i++;
	res = ft_substr(*format, 0, i);
	*format = *format + i;
	return (res);
}

static int	def_flag(char **format)
{
	int		flag;
	char	*flags;

	flag = 0;
	flags = get_flags(format);
	if (**format == 'd' || **format == 'i')
	{
		if (ft_strchr(flags, ' '))
			flag = space;
		if (ft_strchr(flags, '+'))
			flag = plus;
	}
	else if (**format == 'x' || **format == 'X')
		if (ft_strchr(flags, '#'))
			flag = hash;
	free(flags);
	flags = 0;
	return (flag);
}

static int	select_conv_spec(char **format, va_list *args, int flag)
{
	int	res;

	res = 0;
	if (**format == '%')
		res += ft_putchar_pf('%');
	else if (**format == 'c')
		res += ft_putchar_pf(va_arg(*args, int));
	else if (**format == 's')
		res += ft_putstr_pf(va_arg(*args, char *));
	else if (**format == 'd' || **format == 'i')
		res += ft_putnbr_pf(va_arg(*args, int), flag);
	else if (**format == 'u')
		res += ft_putnbr_base_pf(va_arg(*args, unsigned int),
				"0123456789", 10, flag);
	else if (**format == 'x')
		res += ft_putnbr_base_pf(va_arg(*args, unsigned int),
				"0123456789abcdef", 16, flag);
	else if (**format == 'X')
		res += ft_putnbr_base_pf(va_arg(*args, unsigned int),
				"0123456789ABCDEF", 16, flag);
	else if (**format == 'p')
		res += ft_putaddr_pf(va_arg(*args, void *));
	return (res);
}

int	ft_printf(const char *format, ...)
{
	int		res;
	int		flag;
	va_list	args;

	res = 0;
	flag = noflag;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == ' ' || *format == '+' || *format == '#')
				flag = def_flag((char **) &format);
			res += select_conv_spec((char **) &format, &args, flag);
		}
		else
			res += ft_putchar_pf(*format);
		format++;
	}
	va_end(args);
	return (res);
}
