/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:52:00 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/02 19:30:19 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	double_check(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str[index] == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	first_len(char *str, char *charset)
{
	int	i;
	int	count;
	int	flag;

	flag = 1;
	i = 0;
	count = 0;
	while (str[i])
	{
		while (double_check(str, charset, i))
		{
			i++;
			flag = 1;
		}
		if (!str[i])
			return (count);
		if (flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

int	sec_len(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (str[i + index])
	{
		if (double_check(str, charset, i + index))
			break ;
		i++;
	}
	return (i);
}

void	ft_strcpy(char *arr, char *str, int len, int index)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = str[index + i];
		i++;
	}
	arr[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		len;

	arr = (char **)malloc(sizeof(char *) * (first_len(str, charset) + 1));
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (double_check(str, charset, i))
			i++;
		if (!str[i])
			break ;
		len = sec_len(str, charset, i);
		arr[j] = (char *)malloc(sizeof(char) * (len + 1));
		ft_strcpy(arr[j++], str, len, i);
		i = i + len;
	}
	arr[j] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	int		index;
	char	**split;
	split = ft_split("_hello $my$##cool = frie nd !+", " ");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/