/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:46:07 by minsupk2          #+#    #+#             */
/*   Updated: 2022/05/05 14:50:57 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	i = 0;
	if (length <= 2)
		return (1);
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			asc++;
		if (f(tab[i], tab[i + 1]) >= 0)
			desc++;
		i++;
	}
	if (i == asc || i == desc)
		return (1);
	else
		return (0);
}
