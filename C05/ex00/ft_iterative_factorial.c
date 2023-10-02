/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:20:10 by hennassi          #+#    #+#             */
/*   Updated: 2023/10/01 23:59:09 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	n = nb - 1;
	while (n)
	{
		nb = n * nb;
		n--;
	}
	return (nb);
}
