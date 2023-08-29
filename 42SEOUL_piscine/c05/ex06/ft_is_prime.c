/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:27 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/25 17:36:32 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("0 %d\n", ft_is_prime(0));
	printf("0 %d\n", ft_is_prime(1));
	printf("1 %d\n", ft_is_prime(2));
	printf("1 %d\n", ft_is_prime(3));
	printf("0 %d\n", ft_is_prime(4));
	printf("1 %d\n", ft_is_prime(5));
	printf("0 %d\n", ft_is_prime(36));
	printf("1 %d\n", ft_is_prime(37));
	printf("1 %d\n", ft_is_prime(41));
	printf("0 %d\n", ft_is_prime(-41));
	printf("0 %d\n", ft_is_prime(18));
	printf("0 : %d\n", ft_is_prime(-1));
	printf("1 : %d\n", ft_is_prime(29));
	printf("1 : %d\n", ft_is_prime(11));
}
*/