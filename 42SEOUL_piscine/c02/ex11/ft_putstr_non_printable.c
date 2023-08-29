/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:21:35 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 17:57:26 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)str[i] / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char str[30] = "Coucou\ntu vas bien ?";
	char str1[30] = "\t\n\v\f\r ";
	char str2[30] = {200, 201, 202, 203, 204, 205};
	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
}
*/
