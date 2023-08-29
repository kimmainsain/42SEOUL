/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:52 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/02 19:15:32 by minsupk2         ###   ########.fr       */
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

int	ft_countcheck(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	len;

	k = 0;
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i != size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		arr = (char *)malloc(sizeof(char));
		*arr = 0;
		return (arr);
	}
	arr = (char *)malloc(sizeof(char) * (ft_countcheck(size, strs, sep) + 1));
	if (!arr)
		return (0);
	arr[0] = '\0';
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	printf("----ex03----\n");
	char *strs[10];
	strs[0] = "Hello";
	strs[1] = "My";
	strs[2] = "name";
	strs[3] = "is";
	strs[4] = "test";
	strs[5] = "Nice";
	strs[6] = "to";
	strs[7] = "see";
	strs[8] = "you";
	strs[9] = "!!!";
	char *sep1 = " ";
	char *sep2 = "\n";
	char *sep3 = "---!!---";
	char *sep4 = "";
	char *str;
	str = ft_strjoin(5, strs, sep1);
	printf("%s\n", str);
	free(str);
	str = ft_strjoin(10, strs, sep2);
	printf("%s\n", str);
	free(str);
	str = ft_strjoin(2, strs, sep3);
	printf("%s\n", str);
	free(str);
	str = ft_strjoin(1, strs, sep1);
	printf("%s\n", str);
	free(str);
	str = ft_strjoin(0, strs, sep1);
	printf("%s\n", str);
	free(str);
	str = ft_strjoin(10, strs, sep4);
	printf("%s\n", str);
	free(str);
}
*/
