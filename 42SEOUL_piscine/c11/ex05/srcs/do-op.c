/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:20:46 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/04 21:21:41 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/cal.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	result = 0;
	i = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * minus);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

char	check_oper(char *oper_str)
{
	int	i;

	i = 0;
	while (oper_str[i])
	{
		i++;
	}
	if (i == 1)
	{
		if (oper_str[0] == '+')
			return (0);
		if (oper_str[0] == '-')
			return (1);
		if (oper_str[0] == '*')
			return (2);
		if (oper_str[0] == '/')
			return (3);
		if (oper_str[0] == '%')
			return (4);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int	(*do_check[5])(int, int);
	int	input[2];
	int	oper;

	do_check[0] = &ft_add;
	do_check[1] = &ft_sub;
	do_check[2] = &ft_mul;
	do_check[3] = &ft_div;
	do_check[4] = &ft_mod;
	if (argc == 4)
	{
		input[0] = ft_atoi(argv[1]);
		input[1] = ft_atoi(argv[3]);
		oper = check_oper(argv[2]);
		if (oper == 3 && input[1] == 0)
			write(1, "Stop : division by zero", 23);
		else if (oper == 4 && input[1] == 0)
			write(1, "Stop : modulo by zero", 21);
		else if (oper >= 0 && oper <= 4)
			ft_putnbr(do_check[oper](input[0], input[1]));
		else
			ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
