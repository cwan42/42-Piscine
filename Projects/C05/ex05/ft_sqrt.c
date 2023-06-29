/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:32:05 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 16:46:25 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Sqrtof 16 is %d.\n", ft_sqrt(16));
	printf("Sqrtof 26 is %d.\n", ft_sqrt(26));
	printf("Sqrtof 36 is %d.\n", ft_sqrt(36));
	printf("Sqrtof 49 is %d.\n", ft_sqrt(49));
	printf("Sqrtof 100 is %d.\n", ft_sqrt(100));
	return (0);
}
*/
