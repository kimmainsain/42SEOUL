/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:21:09 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 17:23:49 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	ft_strlowcase(str);
	flag = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
			{
				str[i] = str[i] - 32;
				flag = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[100] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";

	char str2[100] = "sAlUt, commEnt tu vAs ?
	42Mots quaraNte-Deux; cInquaNte+et+un";
	ft_strcapitalize(str);
	ft_strcapitalize(str2);

	printf("%s\n", str);
	printf("%s", str2);
}
*/
