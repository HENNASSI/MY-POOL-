/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:09:31 by hennassi          #+#    #+#             */
/*   Updated: 2023/09/19 02:10:01 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int y;
	int x;
	int div;
	int mod;
	y = 20;
	x = 2;
	
	ft_div_mod(y, x, &div, &mod);
	printf("%d %d", div, mod);
}*/
