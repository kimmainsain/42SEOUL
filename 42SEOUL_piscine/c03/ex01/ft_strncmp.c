/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <string>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:53:27 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/21 13:54:16 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[30] = "abcdef";
	char str1[30] = "abcde";
	printf("%d\n", strncmp(str, str1, 6));
	printf("%d", ft_strncmp(str, str1, 6));
}
*/