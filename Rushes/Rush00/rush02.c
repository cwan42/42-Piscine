/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 05:19:50 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/24 16:52:32 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	l;

	l = 1;
	while (l <= y && x > 0)
	{
		w = 1;
		while (w <= x)
		{
			if ((w == 1 || w == x) && l == 1)
				ft_putchar('A');
			else if ((w == 1 || w == x) && l == y)
				ft_putchar('C');
			else if (w <= x && (l == 1 || l == y))
				ft_putchar('B');
			else if ((w == 1 || w == x) && (l <= y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		l++;
	}
}
