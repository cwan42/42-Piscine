/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:52:39 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/26 00:40:53 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
//	int min = -2147483648;
//	int max = 2147483647;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 11);
	}
	else if (nb >= 0 && nb <10)
		ft_putchar(nb);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else
		while (nb > 9)
		{	
		ft_putnbr(nb / 10);
		putchar(nb % 10 + '0');
		}

}

#include <stdio.h>

int	main(void)
{
	int nb;

	ft_putnbr(10);
	return (0);	
/*	printf("Key in a bombastic value, I dare you: ");
	scanf("%d", &nb);
	ft_putnbr(nb);
*/
}
