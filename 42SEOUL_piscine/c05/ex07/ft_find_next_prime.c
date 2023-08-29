/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:28 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/25 17:37:42 by minsupk2         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (1)
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
}
/*
#include <stdio.h>
int main()
{
	printf("2 : %d\n", ft_find_next_prime(-123));
	printf("7 : %d\n", ft_find_next_prime(6));
	printf("11 : %d\n", ft_find_next_prime(11));
	printf("2 : %d\n", ft_find_next_prime(0));
	printf("31 : %d\n", ft_find_next_prime(30));
	printf("97 : %d\n", ft_find_next_prime(90));
}
*/