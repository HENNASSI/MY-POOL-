/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hennassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:43:49 by hennassi          #+#    #+#             */
/*   Updated: 2023/09/21 01:43:51 by hennassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*low(char	*str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] += 32;
		else
			str[x] = str[x];
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	low(str);
	while (str[x])
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			if (y == 0)
			{
				str[x] -= 32;
				y = 1 ;
			}
		}
		else if (str[x] >= '0' && str[x] <= '9')
			y = 1;
		else
			y = 0;
		x++;
	}
	return (str);
}
/*int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/