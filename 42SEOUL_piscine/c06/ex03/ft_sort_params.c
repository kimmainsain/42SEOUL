/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupk2 <minsupk2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:08:13 by minsupk2          #+#    #+#             */
/*   Updated: 2022/04/24 17:48:13 by minsupk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

int	ft_strcmp(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i] && str1[i] && str[i] == str1[i])
	{
		i++;
	}
	return (str[i] - str1[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
