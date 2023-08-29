/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:49 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/01 17:05:50 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int min = -3;
	int	max = 6;
	int *arr;
	printf("min :%d  max: %d\n\n",min, max);
	int result =ft_ultimate_range(&arr, min, max);
	printf("result:::::: len :%d \n\n\n\n",result);
	if (result <= 0)
	{
		printf("ex02 error check is ok\n");
	}
	else
	{
		for (int i = 0; i < result; i++)
		{
			printf("arr[%d] : %d\n", i,arr[i]);
		}
		free(arr);
	}
}
*/