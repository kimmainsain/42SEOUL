/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:15 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/27 13:57:22 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("----ex01----\n");
	printf("5! : %d\n", ft_recursive_factorial(5));
	printf("1! : %d\n", ft_recursive_factorial(1));
	printf("0! : %d\n", ft_recursive_factorial(0));
	printf("7! : %d\n", ft_recursive_factorial(7));
	printf("-1! : %d\n", ft_recursive_factorial(-1));
	printf("10000! : %d\n", ft_recursive_factorial(10000));
}
*/