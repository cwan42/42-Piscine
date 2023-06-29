/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:49:36 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 15:55:52 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int num;

	num = nb;
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (num);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-5^3: %d \n", ft_recursive_power(-5, 3));
	printf("2^3: %d \n", ft_recursive_power(2, 3));
	printf("4^4: %d \n", ft_recursive_power(4, 4));
	printf("4^5: %d \n", ft_recursive_power(4, 5));
	printf("5^5: %d \n", ft_recursive_power(5, 5));
}
*/
