/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:00:58 by minsupk2          #+#    #+#             */
/*   Updated: 2022/07/24 19:09:52 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits(long long n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(long long n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_itoa(int n)
{
	long long	nb;
	int			size;

	size = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		size += 1;
	}
	size = size + ft_countdigits(nb);
	ft_putnbr(nb);
	return (size);
}

int	ft_uitoa(int n)
{
	unsigned int	nb;
	int				size;

	size = 0;
	nb = (unsigned int)n;
	size = size + ft_countdigits(nb);
	ft_putnbr(nb);
	return (size);
}
