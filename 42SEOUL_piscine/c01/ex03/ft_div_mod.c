/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:33:58 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 17:25:47 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int a = 13;
	int b = 10;
	int div = 1;
	int mod = 1;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}
*/
