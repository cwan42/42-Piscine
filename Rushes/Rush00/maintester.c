/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 05:02:40 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/24 17:21:45 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	printf("Enter two numbers to draw a rectangle!: ");
	scanf("%d %d", &x, &y);
	rush(x, y);
	return (0);
}
