/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:37:47 by hennassi          #+#    #+#             */
/*   Updated: 2023/10/02 00:00:22 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	up;

	if (power < 0)
		return (0);
	up = 1;
	while (power > 0)
	{
		up *= nb;
		power--;
	}
	return (up);
}
