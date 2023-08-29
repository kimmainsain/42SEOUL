/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:19:12 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/16 16:46:29 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[50] = "abcdef";
	char str2[50] = "minsupkkkk";
	char *str_cp = strncpy(str1, str2, 4);
	printf("FM : %s\n", str_cp);
	printf("strncpy : %s %s\n", str1, str2);
}
*/
