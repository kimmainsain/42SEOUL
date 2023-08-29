/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:25 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/28 15:31:05 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (i == nb / i && nb % i == 0)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("6 : %d\n", ft_sqrt(36));
	printf("0 : %d\n", ft_sqrt(0));
	printf("9 : %d\n", ft_sqrt(81));
	printf("0 : %d\n", ft_sqrt(-1));
	printf("0 : %d\n", ft_sqrt(99));
	printf("1 : %d\n", ft_sqrt(1));
	printf("0 : %d\n", ft_sqrt(2));
	printf("0 : %d\n", ft_sqrt(3));
	printf("2 : %d\n", ft_sqrt(4));
	printf("0 : %d\n", ft_sqrt(5));
	printf("0 : %d\n", ft_sqrt(6));
}
*/