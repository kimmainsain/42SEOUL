/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:19:55 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 11:49:01 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *arr = "123123123";
	char *arr2 = "1a231b231c23";
	char *arr3 = "abcdefg";
	char *arr4 = "";
	printf("%d\n%d\n%d\n%d", ft_str_is_lowercase(arr),ft_str_is_lowercase(arr2),
			ft_str_is_lowercase(arr3),ft_str_is_lowercase(arr4));
}
*/
