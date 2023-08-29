/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:21:48 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/18 19:15:30 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = 0;
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
