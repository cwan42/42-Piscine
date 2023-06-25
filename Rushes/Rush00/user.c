/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:21:25 by ysng              #+#    #+#             */
/*   Updated: 2023/06/25 12:37:42 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	printf("Enter width, <space>, and the length of the quadrilateral: ");
	scanf ("%d %d", &x, &y);
	if (x < 1 || y < 1)
		printf("Invalid entry, rerun code.\n");
	else
		rush (x, y);
	return (0);
}
