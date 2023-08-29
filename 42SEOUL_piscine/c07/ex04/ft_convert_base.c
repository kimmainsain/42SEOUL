/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:54 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/02 19:28:45 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(long long nb, int base_len);
char	*ft_itoa(int nbr, int base_len, char *base_to);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_doublebase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_except(char *str)
{
	int	i;
	int	size;
	int	j;

	size = 0;
	i = 0;
	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] <= 32 || (str[i] >= 127))
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus = minus * -1;
		}
		i++;
	}
	return (minus * i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	minus;
	int	base_len;
	int	result;
	int	double_index;

	result = 0;
	minus = 1;
	if (ft_except(base_from) == 0 || ft_except(base_to) == 0)
		return (0);
	base_len = ft_strlen(base_from);
	i = ft_atoi(nbr);
	if (i < 0)
	{
		minus = -1;
		i = i * -1;
	}
	double_index = ft_doublebase(nbr[i], base_from);
	while (double_index != -1)
	{
		result = (result * base_len) + double_index;
		i++;
		double_index = ft_doublebase(nbr[i], base_from);
	}
	return (ft_itoa(minus * result, base_len = ft_strlen(base_to), base_to));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
		printf("\n----------------------ex04----------------------------\n");
		char basefrom[100] = "0123456789";
		char baseto[100] = "0123456789";
		char input[100] = "      ---+2147483648";
		printf("basefrom : %s\nlen : %lu \n input num : 
		%s baseto: %s \n\n\n",basefrom ,strlen(basefrom),input, baseto);
		char *result = ft_convert_base(input, basefrom, baseto);
		printf("result::: %s\n\n\n",result);
}
*/