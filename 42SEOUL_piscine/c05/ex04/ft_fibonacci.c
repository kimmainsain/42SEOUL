/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:20 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/25 17:35:48 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main()
{
	printf("----ex04----\n");
	printf("0 : %d\n", ft_fibonacci(0));
	printf("-1 : %d\n", ft_fibonacci(-4));
	printf("1 : %d\n", ft_fibonacci(1));
	printf("1 : %d\n", ft_fibonacci(2));
	printf("2 : %d\n", ft_fibonacci(3));
	printf("8 : %d\n", ft_fibonacci(6));
	printf("13 : %d\n", ft_fibonacci(7));
}
*/