/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:34:11 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 18:52:16 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int a = 10;
	int b = 5;
	int divided, modulo;

	ft_div_mod(a, b, &divided, &modulo);
	printf("Result of %d divided by %d is %d, with modulo %d.\n", a, b, divided, modulo);
	return (0);
}
*/
