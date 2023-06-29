/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:42:34 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 14:55:13 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-5 = %d \n", ft_recursive_factorial(-5));
	printf("1 = %d \n", ft_recursive_factorial(1));
	printf("3 = %d \n", ft_recursive_factorial(3));
	printf("4 = %d \n", ft_recursive_factorial(4));
	printf("5 = %d \n", ft_recursive_factorial(5));
}
*/
