/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:56:15 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 16:03:23 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2)) + (ft_fibonacci(index - 1));
	
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d, ", ft_fibonacci(3));
	printf("%d, ", ft_fibonacci(4));
	printf("%d, ", ft_fibonacci(5));
	printf("%d, ", ft_fibonacci(6));
	printf("%d", ft_fibonacci(7));
}
*/
