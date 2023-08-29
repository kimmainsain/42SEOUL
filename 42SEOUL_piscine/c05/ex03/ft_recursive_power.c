/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:19 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/25 17:35:26 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("2^4 : %d\n", ft_recursive_power(2, 4));
	printf("1^0 : %d\n", ft_recursive_power(1, 0));
	printf("0^-3 : %d\n", ft_recursive_power(0, -3));
	printf("0^2 : %d\n", ft_recursive_power(0, 2));
	printf("0^0 : %d\n", ft_recursive_power(0, 0));
	printf("-2^1 : %d\n", ft_recursive_power(-2, 1));
	printf("-4^2 : %d\n", ft_recursive_power(-4, 2));
	printf("5^-1 : %d\n", ft_recursive_power(5, -1));
}
*/