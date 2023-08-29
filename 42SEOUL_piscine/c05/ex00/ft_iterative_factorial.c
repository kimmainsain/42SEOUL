/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:13 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/28 15:27:19 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	if (result == 0)
		return (1);
	if (result < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("----ex00----\n");
		printf("5! : %d\n", ft_iterative_factorial(5));
		printf("1! : %d\n", ft_iterative_factorial(1));
		printf("0! : %d\n", ft_iterative_factorial(0));
		printf("3! : %d\n", ft_iterative_factorial(3));
		printf("-1! : %d\n", ft_iterative_factorial(-1));
		printf("10000! : %d\n", ft_iterative_factorial(10000));
}
*/