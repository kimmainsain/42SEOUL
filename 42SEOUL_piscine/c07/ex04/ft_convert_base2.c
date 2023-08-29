/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:56 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/05 15:43:06 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(long long nb, int base_len)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb)
	{
		nb = nb / base_len;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr, int base_len, char *base_to)
{
	int			len;
	char		*str;
	long long	nb;

	nb = nbr;
	len = ft_size(nb, base_len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	if (nb == 0)
		str[0] = base_to[0];
	while (nb)
	{
		str[len] = base_to[nb % base_len];
		nb = nb / base_len;
		len--;
	}
	return (str);
}
