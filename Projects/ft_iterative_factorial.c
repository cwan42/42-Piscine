/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:33:46 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 14:55:00 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 0)
		ans *= nb--;
	return (ans);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-5! = %d\n", ft_iterative_factorial(-5));
	printf("1! = %d\n", ft_iterative_factorial(1));
	printf("3! = %d\n", ft_iterative_factorial(3));
	printf("4! = %d\n", ft_iterative_factorial(4));
	printf("5! = %d\n", ft_iterative_factorial(5));
}
*/
