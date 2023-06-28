/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:20:29 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 00:12:26 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchars(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	process(int num, int max)
{
	char nbr;
	char bignbr;

	if (num <= 9)
	{
		nbr = num + 48;
		putchars('0', nbr);
	}
	else if (num <= max)
	{
		bignbr = (num / 10) + 48;
		nbr = (num % 10) + 48;
		putchars(bignbr, nbr);
	}
	
}
void	pairspace(int first, int sec)
{
	process(first, 98);
	write(1, " ", 1);
	process(sec, 99);
	if (!(first == 98 && sec == 99))
		putchars(',',' ');
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			pairspace(left,right);
			right++;
		}
		left++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
