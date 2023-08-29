/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:33:45 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 14:58:25 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main()
{
	int a = 42;
	int b = 24;
	printf("before\n%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("after\n%d %d", a, b);
}
*/
