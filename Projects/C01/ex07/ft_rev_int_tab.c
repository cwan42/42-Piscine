/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:00:27 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 20:30:44 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
//if no tab[], init will auto assign, tab = name for array
	int size = 5;
//manual init of size to use when calling subfunction

	ft_rev_int_tab(tab, size);
	printf("43210: %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
*/
