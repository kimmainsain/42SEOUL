/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:30:49 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/24 12:54:48 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	result = 0;
	i = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * minus);
}
/*
#include <stdio.h>
int main()
{
	char str[30] = "    ---+--+1234ab567";
	char str2[30] = "    +--+1234ab567";
	char str3[30] = " \n ---+--+1234ab567";
	char str4[30] = "\t \v \n \r \f +++1234567";
	printf("%d\n%d\n%d\n%d", ft_atoi(str),
	ft_atoi(str2), ft_atoi(str3), ft_atoi(str4));
}
*/
