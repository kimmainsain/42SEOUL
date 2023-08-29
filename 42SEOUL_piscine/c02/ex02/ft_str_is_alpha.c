/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:19:27 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 17:29:42 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	{
		char str1[50] = "anseddmeAASDFcc";
		char str2[50] = "as1aslkAA";
		char str3[50] = "";
		char str4[50] = "21531";
		printf("%d, %d, %d, %d\n", ft_str_is_alpha(str1),
		ft_str_is_alpha(str2), ft_str_is_alpha(str3), ft_str_is_alpha(str4));
	}
}
*/
