/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:09:43 by hennassi          #+#    #+#             */
/*   Updated: 2023/09/19 02:05:40 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swp;

	y = size - 1;
	x = 0;
	while (x < y)
	{
		swp = tab[x];
		tab[x] = tab[y];
		tab[y] = swp;
		x++;
		y--;
	}
}
/*int main()
{
	int tab[4] = {10, 20, 30, 40};
	int size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d %d %d %d",tab[0],tab[1],tab[2],tab[3]);
}*/
