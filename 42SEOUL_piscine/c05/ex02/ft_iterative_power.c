/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:17 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/28 15:30:14 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("----ex02----\n");
	printf("2^4 : %d\n", ft_iterative_power(2, 4));
	printf("1^0 : %d\n", ft_iterative_power(1, 0));
	printf("0^-3 : %d\n", ft_iterative_power(0, -3));
	printf("0^2 : %d\n", ft_iterative_power(0, 2));
	printf("0^0 : %d\n", ft_iterative_power(0, 0));
	printf("-2^1 : %d\n", ft_iterative_power(-2, 1));
	printf("-4^2 : %d\n", ft_iterative_power(-4, 2));
	printf("5^-1 : %d\n", ft_iterative_power(5, -1));
}
*/