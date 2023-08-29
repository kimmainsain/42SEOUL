/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:20 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 17:22:55 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int arr[7] = {3,4,6,2,7,1,5};
	ft_sort_int_tab(arr, 7);
	int i;
	i = 0;
	while (i < 7)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
*/
