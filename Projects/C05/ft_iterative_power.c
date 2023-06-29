/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:55:36 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 15:48:19 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-5^3: %d \n", ft_iterative_power(-5, 3));
	printf("2^3: %d \n", ft_iterative_power(2, 3));
	printf("4^4: %d \n", ft_iterative_power(4, 4));
	printf("4^5: %d \n", ft_iterative_power(4, 5));
	printf("5^5: %d \n", ft_iterative_power(5, 5));
}
*/
