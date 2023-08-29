/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:46 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/30 19:51:29 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!str)
		return (0);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("----ex01----\n");
	int	*arr;
	arr = ft_range(-9, 10);
	for(int i=0;i<19;i++)
		printf("%d ",arr[i]);
	printf("\n");
	free(arr);
	arr = ft_range(1, 1);
	printf("%p\n", arr);
	free(arr);
}
*/