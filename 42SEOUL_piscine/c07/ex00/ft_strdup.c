/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:44 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/30 11:54:00 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("----ex00----\n");
	char *str;
	str = ft_strdup("HELLO WORLD!!!");
	printf("%s\n", str);
	free (str);
	str = ft_strdup("42!~?@(10\t~~!");
	printf("%s\n", str);
	free (str);
	str = ft_strdup("");
	printf("%s\n", str);
	free (str);
}
*/