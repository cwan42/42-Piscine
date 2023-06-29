/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:38:55 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 16:46:46 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Is 3 prime? %d \n", ft_is_prime(3));
	printf("Is 5 prime? %d \n", ft_is_prime(5));
	printf("Is 8 prime? %d \n", ft_is_prime(8));
	printf("Is 11 prime? %d \n", ft_is_prime(11));
	printf("Is 535 prime? %d \n", ft_is_prime(535));
}
*/
