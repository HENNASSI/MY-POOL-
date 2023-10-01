/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_sort_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:25:05 by hennassi          #+#    #+#             */
/*   Updated: 2023/10/01 04:57:54 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int s, char **b)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x <= (s - 1))
	{
		while (b[x][y])
		{
			write(1, &b[x][y], 1);
			y++;
		}
		y = 0;
		write(1, "\n", 1);
		x++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	*temp;
	int		x;
	int		y;

	x = 1;
	if (ac > 1)
	{
		while (x < (ac - 1))
		{
			y = ft_strcmp(av[x], av[x + 1]);
			if (y > 0)
			{
				temp = av[x];
				av[x] = av[x + 1];
				av[x + 1] = temp;
				x = 0;
			}
			x++;
		}
		ft_print_params(ac, av);
	}
}
