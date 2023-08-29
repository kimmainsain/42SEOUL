/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:08:23 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/13 16:29:37 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int c)
{
	ft_putchar(c / 10 + '0');
	ft_putchar(c % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnb(a);
			write(1, " ", 1);
			ft_putnb(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
