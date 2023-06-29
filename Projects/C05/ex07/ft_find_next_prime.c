/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:47:34 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 16:55:11 by cwan             ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Number 3, next prime is %d.\n", ft_find_next_prime(3));
	printf("Number 4, next prime is %d.\n", ft_find_next_prime(4));
	printf("Number 8, next prime is %d.\n", ft_find_next_prime(8));
	printf("Number 11, next prime is %d.\n", ft_find_next_prime(11));
	printf("Number 12, next prime is %d.\n", ft_find_next_prime(12));
}
*/
