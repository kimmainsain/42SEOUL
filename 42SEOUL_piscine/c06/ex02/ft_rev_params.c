/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:08:12 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/24 17:39:58 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	argc--;
	while (argc)
	{
		j = 0;
		while (argv[argc][j])
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
