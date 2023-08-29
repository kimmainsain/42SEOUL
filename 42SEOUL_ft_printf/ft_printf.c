/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:01:20 by minsupk2          #+#    #+#             */
/*   Updated: 2022/07/24 19:36:55 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_call_check(char c, va_list var_arg)
{
	unsigned long long	p;

	if (c == 'c')
		return (ft_putchar((char)va_arg(var_arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(var_arg, char *)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(var_arg, int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd' || c == 'i')
		return (ft_itoa(va_arg(var_arg, int)));
	else if (c == 'u')
		return (ft_uitoa(va_arg(var_arg, int)));
	else if (c == 'p')
	{
		p = va_arg(var_arg, unsigned long long);
		if (p == 0)
			return (ft_putstr("0x0"));
		else
			return (ft_putstr("0x") + ft_putpointer(p));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	var_arg;
	int		i;
	int		sum;

	if (!str)
		return (0);
	va_start(var_arg, str);
	i = 0;
	sum = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				break ;
			sum = sum + ft_call_check(str[i], var_arg);
		}
		else
			sum = sum + ft_putchar(str[i]);
		i++;
	}
	va_end(var_arg);
	return (sum);
}
