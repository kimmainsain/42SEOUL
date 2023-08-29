/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:08:45 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/14 15:42:30 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_arr[10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_print(int n)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (i < n - 1)
	{
		if (g_arr[i] >= g_arr[i + 1])
			check = 0;
		i++;
	}
	if (check == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(g_arr[i]);
			i++;
		}
		if (g_arr[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	create_while(int depth, int n)
{
	if (depth == n - 1)
	{
		g_arr[depth] = '0';
		while (g_arr[depth] <= '9')
		{
			if (g_arr[0] > '1' && n == 9)
				break ;
			ft_check_print(n);
			g_arr[depth]++;
		}
	}
	else
	{
		g_arr[depth] = '0';
		while (g_arr[depth] <= '9')
		{
			create_while(depth + 1, n);
			g_arr[depth]++;
		}
	}
}

void	ft_print_combn(int n)
{
	create_while(0, n);
}
