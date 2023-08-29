/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:40:30 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/28 15:30:47 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_xboard[10];
int	g_yboard[10];

int	ft_abs(int a, int b)
{
	if (a - b >= 0)
		return (a - b);
	return ((a - b) * -1);
}

void	ft_putchar(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = g_xboard[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	queen_bt(int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < y)
	{
		if (x == g_xboard[i] || y == g_yboard[i])
			return (0);
		if (ft_abs(x, g_xboard[i]) == ft_abs(y, g_yboard[i]))
			return (0);
		i++;
	}
	g_xboard[y] = x;
	g_yboard[y] = y;
	if (y == 9)
	{
		ft_putchar();
		return (1);
	}
	i = -1;
	while (++i < 10)
		count = count + queen_bt(i, y + 1);
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < 10)
	{
		count = count + queen_bt(i, 0);
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_ten_queens_puzzle());
}
*/