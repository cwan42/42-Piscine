/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:56:20 by nsim              #+#    #+#             */
/*   Updated: 2023/06/25 10:11:14 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	length;

	length = 1;
	while (length <= y && x > 0)
	{
		width = 1;
		while (width <= x)
		{
			if ((length == 1 || length == y) && (width == 1 || width == x))
				ft_putchar ('o');
			else if ((length == 1 || length == y) && (width != 1 || width != x))
				ft_putchar ('-');
			else if ((width == 1 || width == x) && (length != 1 || length != y))
				ft_putchar ('|');
			else
				ft_putchar (' ');
			width++;
		}
		ft_putchar ('\n');
		length++;
	}
}
