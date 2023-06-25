/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:34:33 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 21:16:13 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)

{
	int i;
	int temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 2)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[6] = {7, 3, 5, 1, 9, 11};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("Values are 7,3,5,1,9,11. Sorted: %d,%d,", tab[0], tab[1]);
	printf("%d,%d,%d,%d. Correct?\n", tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
