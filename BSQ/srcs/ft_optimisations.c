/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimisations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:51:28 by axlee             #+#    #+#             */
/*   Updated: 2023/07/10 17:34:12 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	check_smth(int position[2], int size, int width, int height)
{
	if (position[0] + size > width)
		return (0);
	else if (position[1] + size > height)
		return (0);
	return (1);
}

int	ft_bigger_sqr(char *str, int position[2], t_instr *info, int size)
{
	int		x;
	int		y;
	int		start;

	x = size - 1;
	y = 0;
	start = info->length + position[0] + (position[1]) * (info->width + 1);
	if (!check_smth(position, size, info->width, info->height))
		return (0);
	while (y < size - 1)
	{
		if (str[start + x + y * (info->width + 1)] == info->empty)
			y++;
		else
			return (0);
	}
	x = 0;
	while (x < size)
	{
		if (str[start + x + y * (info->width + 1)] == info->empty)
			x++;
		else
			return (0);
	}
	return (1);
}
