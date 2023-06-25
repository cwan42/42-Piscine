/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:09:02 by cwan              #+#    #+#             */
/*   Updated: 2023/06/24 12:33:04 by cwan             ###   ########.fr       */
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
	printf("Result:%d, remainder:%d\n", divided, modulo);
}
*/
