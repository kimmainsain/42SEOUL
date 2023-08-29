/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:06:07 by minsupk2          #+#    #+#             */
/*   Updated: 2022/07/21 19:15:14 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_after(char *str)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (0);
	}
	rest = malloc((ft_strlen(str) - i) + 1);
	if (!rest)
		return (0);
	j = 0;
	while (str[i])
		rest[j++] = str[i++];
	rest[j] = '\0';
	free(str);
	return (rest);
}

char	*ft_before(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

int	ft_check_nl(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_read(int fd, char *buf, char *str)
{
	char	*tmp;
	int		bytes;

	bytes = 1;
	while (!ft_check_nl(str) && bytes)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			return (0);
		}
		buf[bytes] = '\0';
		tmp = str;
		if (!tmp)
		{
			tmp = malloc(1);
			tmp[0] = '\0';
		}	
		str = ft_strjoin(tmp, buf);
		free(tmp);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*str;
	char		*line;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	if (fd < 0 || BUFFER_SIZE < 1)
	{
		free(buf);
		return (0);
	}
	str = ft_read(fd, buf, str);
	if (!str)
		return (0);
	line = ft_before(str);
	str = ft_after(str);
	return (line);
}