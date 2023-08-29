/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:34:12 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 15:01:22 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a / *b;
	temp2 = *a % *b;
	*a = temp;
	*b = temp2;
}
/*
#include <stdio.h>
int main()
{
	int a = 13;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
*/
