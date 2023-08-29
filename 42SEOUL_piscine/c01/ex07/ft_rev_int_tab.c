/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:06 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 17:21:54 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int main()
{
	int intarr1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,100,2};
	for(int i=0;i<14;i++){
		printf("%d ",intarr1[i]);
	}
	printf("\n");
	ft_rev_int_tab(intarr1, 14);
	for(int i=0;i<14;i++){
		printf("%d ",intarr1[i]);
	}
}
*/
