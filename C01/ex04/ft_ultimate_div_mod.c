/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:10:56 by hennassi          #+#    #+#             */
/*   Updated: 2023/09/19 02:11:01 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	swp;

	swp = *a % *b;
	*a = *a / *b;
	*b = swp;
}
/*int main()
{
	int y = 20;
	int x = 10;
	int *pntry = &y;
	int *pntrx = &x;

	ft_ultimate_div_mod(pntry,pntrx);
	printf("%d %d",*pntry,*pntrx);
}*/
