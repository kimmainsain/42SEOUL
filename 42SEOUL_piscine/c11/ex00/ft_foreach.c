/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:45:49 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/04 16:42:46 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

void executer(int (*fp)(int, int))
{
	printf("%d\n", fp(10,20));
}

int main()
{
	executer(add);
	return 0;
}
*/
