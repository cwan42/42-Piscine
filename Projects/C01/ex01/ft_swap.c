/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:01:32 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 20:31:50 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int x = 1;
	int y = 2;

	ft_swap(&x, &y);
	printf("Original values were 1 and 2, now %d and %d after swap\n", x, y);
	return (0);
}
*/
