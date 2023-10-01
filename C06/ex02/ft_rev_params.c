/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:13:39 by hennassi          #+#    #+#             */
/*   Updated: 2023/10/01 03:23:38 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	n = ac - 1;
	while (n > 0)
	{
		i = 0;
		while (av[n][i])
		{	
			print(av[n][i]);
			i++;
		}
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
