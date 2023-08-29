/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:01:52 by minsupk2          #+#    #+#             */
/*   Updated: 2022/07/24 19:05:39 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_charcount(unsigned long long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(unsigned long long nb, char *base)
{
	if (nb >= 16)
		ft_putnbr_base((nb / 16), base);
	ft_putchar(base[nb % 16]);
}

int	ft_puthex(int i, char x)
{
	char			*base;
	int				sum;
	unsigned int	c;

	base = "0123456789abcdef";
	if (x == 'X')
		base = "0123456789ABCDEF";
	sum = 0;
	c = (unsigned int)i;
	ft_putnbr_base(c, base);
	sum += ft_charcount(c);
	return (sum);
}

int	ft_putpointer(unsigned long long nb)
{
	char		*base;
	int			sum;

	base = "0123456789abcdef";
	sum = 0;
	ft_putnbr_base(nb, base);
	sum += ft_charcount(nb);
	return (sum);
}
