/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:53:31 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/20 15:57:19 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j + 1 + dest_len < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size <= dest_len)
		return (src_len + size);
	else
		return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[500] = "strlcat! ";
	char str2[500] = "But I don't like cat...";
	printf("test\n");
	printf("%s\n%s\n",str1, str2);
	printf("5 Cat\n");
	printf("cated val : %u\n", ft_strlcat(str1, str2, 5) );
	printf("After 5 cat\n");
	printf("%s\n%s\n", str1, str2);
	printf("30 Cat\n");
	printf("cated val : %u\n", ft_strlcat(str1, str2, 30) );
	printf("After 30 cat\n");
	printf("%s\n%s\n", str1, str2);
}
*/
