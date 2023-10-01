/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:30:57 by hennassi          #+#    #+#             */
/*   Updated: 2023/10/01 03:20:11 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	n;

	n = 1;
	while (n < ac)
	{
		i = 0;
		while (av[n][i] != '\0')
		{
			print(av[n][i]);
			i++;
		}
		print('\n');
		n++;
	}
	return (0);
}
