/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:07:42 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/13 16:23:18 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nb;
	int		i;

	nb = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &nb, 1);
		i++;
		nb++;
	}
}
