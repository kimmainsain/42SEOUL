/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <string>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:55:46 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/21 13:57:22 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str);
			}
			i++;
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char str1[30] = "my name is minsup";
	char str2[30] = "name";
	char str3[30] = "minsup";
	printf("%s\n%s\n", str1, str2);
	printf("Find str : %s\n", ft_strstr(str1, str2));
	printf("Find str : %s\n", ft_strstr(str1, str3));
	printf("Find str : %s\n", ft_strstr(str2, str3));
}*/