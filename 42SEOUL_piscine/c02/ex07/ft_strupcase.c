/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:20:37 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 12:00:28 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str1[50] = "1 as f;;'23?!~4";
	char str2[50] = "aanbBBDF1223NNASDFa";
	char str3[50] = "";
	printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Changed Str : %s\n", ft_strupcase(str1));
	printf("Changed Str : %s\n", ft_strupcase(str2));
	printf("Changed Str : %s\n", ft_strupcase(str3));
	printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
}
*/
