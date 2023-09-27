/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:14:31 by hennassi          #+#    #+#             */
/*   Updated: 2023/09/24 19:58:53 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	i;

	i = 0;
	x = 0;
	y = 0;
	while (src[x])
		x++;
	if (size == 0)
		return (x);
	while (dest[y])
		y++;
	if (size <= y)
		return (size + x);
	while (--size && src[i])
	{
		dest[y + i] = src[i];
		i++;
	}
	dest[y + i] = '\0';
	return (x + y);
}
/*#include <stdio.h>
int main (void)
{
	char src[] = "Green Boys";
    	char dest [] = "2005 05";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}*/
