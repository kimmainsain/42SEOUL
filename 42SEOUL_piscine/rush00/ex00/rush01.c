/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:33:37 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/17 11:24:46 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_last(int x, char first, char mid, char last)
{
	int	xi;

	xi = 1;
	while (xi <= x)
	{
		if (xi == 1)
			ft_putchar(first);
		else if (xi == x)
			ft_putchar(last);
		else
			ft_putchar(mid);
		xi++;
	}
}

void	ft_mid(int x, char mid)
{
	int	xi;

	xi = 1;
	while (xi <= x)
	{
		if (xi == 1 || xi == x)
			ft_putchar(mid);
		else
			ft_putchar(' ');
		xi++;
	}
}

void	ft_print(int x, int y)
{
	int		yi;
	char	arr[3];

	arr[0] = '/';
	arr[1] = '*';
	arr[2] = '\\';
	yi = 1;
	while (yi <= y)
	{
		if (yi == 1)
			ft_first_last(x, arr[0], arr[1], arr[2]);
		else if (yi == y)
			ft_first_last(x, arr[2], arr[1], arr[0]);
		else
			ft_mid(x, arr[1]);
		ft_putchar('\n');
		yi++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_print(x, y);
}
