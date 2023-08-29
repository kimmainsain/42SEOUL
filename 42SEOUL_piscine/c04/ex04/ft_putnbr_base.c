/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:18:08 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/27 11:18:43 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_except(char *str)
{
	int	i;
	int	size;
	int	j;

	size = 0;
	i = 0;
	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] <= 32 || (str[i] >= 127))
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_reculsive(long long nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb > base_len - 1)
		ft_reculsive(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;

	if (ft_except(base) == 0)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	ft_reculsive(nb, base);
}
/*
#include <stdio.h>
int main()
{
	{
		printf("----ex04----\n");
		printf("8867\n");
		ft_putnbr_base(1132, "9876543210");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "aabc!");
		printf("\n");

		printf("-bDBbFjci\n");
		ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ"); // 20base
		printf("\n");

		printf("*///////\n");
		/*
		ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/"); // 16base
		printf("\n");

		printf("-@@#!\n");
		ft_putnbr_base(-42, "!@#"); // 3base
		printf("\n");
	}
	printf("\n");
}
*/