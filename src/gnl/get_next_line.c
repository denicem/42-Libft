/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:17:59 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/17 19:25:27 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

# include	<stdlib.h>
# include	<unistd.h>

# define BUFFER_SIZE 42

char	*ft_strjoin_gnl(char *s1, char *s2, int len_s2)
{
	char	*res;
	int		i;
	int		j;

	res = (char *) ft_calloc(ft_strlen(s1) + len_s2 + 1, 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1[0] != '\0')
	{
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
	}
	while (s2[j] && j < len_s2)
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	free(s1);
	return (res);
}

char	*getRes(char **storage, char **readbuf, char **res)
{
	char	*newl;

	if (**res == 0)
	{
		free(*readbuf);
		*readbuf = 0;
		free(*res);
		*res = NULL;
		return (NULL);
	}
	newl = ft_strchr(*res, '\n');
	if (newl != NULL && *(newl + 1) != 0)
	{
		*storage = ft_strdup(newl + 1);
		*(newl + 1) = 0;
	}
	free(*readbuf);
	*readbuf = 0;
	return (*res);
}

char	*readLine(int fd, char **storage, char **readbuf, char **res)
{
	int		bytesRead;

	if (!ft_strchr(*res, '\n'))
	{
		bytesRead = BUFFER_SIZE;
		while (bytesRead == BUFFER_SIZE && !ft_strchr(*readbuf, '\n'))
		{
			bytesRead = read(fd, *readbuf, BUFFER_SIZE);
			if (bytesRead <= 0)
				break ;
			(*readbuf)[bytesRead] = 0;
			*res = ft_strjoin_gnl(*res, *readbuf, bytesRead);
		}
	}
	return (getRes(storage, readbuf, res));
}

int	prepareVars(int fd, char **storage, char **readbuf, char **res)
{
	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	if (*storage)
	{
		*res = ft_strdup(*storage);
		free(*storage);
		*storage = NULL;
	}
	else
	{
		*res = ft_calloc(1, 1);
		if (*res == NULL)
			return (0);
		**res = 0;
	}
	*readbuf = ft_calloc(BUFFER_SIZE + 1, 1);
	if (*readbuf == NULL)
	{
		free(*res);
		return (0);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*storage[10240];
	char		*readbuf;
	char		*res;

	if (!prepareVars(fd, &storage[fd], &readbuf, &res))
		return (NULL);
	res = readLine(fd, &storage[fd], &readbuf, &res);
	return (res);
}
