/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:19:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/04 19:46:08 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

//stdlib TODO: put to seperate header; ft_itoa not sure if it belongs there, maybe to a different folder called additional_funcs?
void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);
