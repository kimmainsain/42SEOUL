/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:18:16 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/26 11:42:10 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		{
			minus = minus * -1;
		}
		i++;
	}
	return (minus * i);
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

int	ft_atoi_base(char *str, char *base)
{
	int			start;
	int			minus;
	int			double_check;
	int			base_len;
	long long	nb;

	minus = 1;
	base_len = ft_strlen(base);
	nb = 0;
	start = ft_atoi(str);
	if (start < 0)
	{
		minus = -1;
		start = start * -1;
	}
	if (ft_except(base) == 0)
		return (0);
	double_check = ft_doublebase(str[start], base);
	while (double_check != -1)
	{
		nb = (nb * base_len) + double_check;
		start++;
		double_check = ft_doublebase(str[start], base);
	}
	return (nb = nb * minus);
}
/*
#include <stdio.h>
int main()
{
	{
		printf("----ex05----\n");
		char *str1 = "   ---+--+AABCDESSEZ";
		char *str2 = "  \n \ta-a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+!!@@#..<";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("-67174\n");
		printf("%d\n", ft_atoi_base(str1, "ABCDES")); // 6base
		printf("\n");
		printf("-1\n");
		printf("%d\n", ft_atoi_base(str1, "ABZ"));
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str3, "A-+")); // +- include
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str1, "")); // 0base
		printf("\n");
		printf("-2147483648\n");
		printf("%d\n", ft_atoi_base(str5, "0123456789")); // 10base
		printf("\n");
		printf("2\n");
		printf("%d\n", ft_atoi_base(str2, "cba")); // 3base
		printf("\n");
		printf("1126397\n");
		printf("%d\n", ft_atoi_base(str4, "!@#$%^&*()~?><'.")); // 16base
		printf("\n");
	}
	printf("\n");
}
*/