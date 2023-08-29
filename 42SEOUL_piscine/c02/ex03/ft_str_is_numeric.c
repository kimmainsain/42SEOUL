/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:19:41 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 17:35:24 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *arr = "qwerasdf";
	char *arr2 = "qw1er2as3df";
	char *arr3 = "1235213";
	char *arr4 = "";
	printf("%d\n%d\n%d\n%d", ft_str_is_numeric(arr), 
	ft_str_is_numeric(arr2), ft_str_is_numeric(arr3),ft_str_is_numeric(arr4));
}
*/
