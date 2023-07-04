/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:41 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 19:19:17 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solving.h"

int	check_col_up(int size, int **grid, int gap, int pattern[size *size])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (gap / size == size - 1)
	{
		while (i < size)
		{
			if (grid[i][gap % size] > max)
			{
				max = grid[i][gap % size];
				count++;
			}
			i++;
		}
		if (pattern[gap % size] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int size, int **grid, int gap, int pattern[size *size])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = size;
	max_size = 0;
	visible_towers = 0;
	if (gap % size == (size -1))
	{
		while (--i >= 0)
		{
			if (grid[gap / size][i] > max_size)
			{
				max_size = grid[gap / size][i];
				visible_towers++;
			}
		}
		if (pattern[(size * 3) + gap / size] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int size, int **grid, int gap, int pattern[size *size])
{
	int	i;
	int	max;
	int	count;

	i = size - 1;
	max = 0;
	count = 0;
	if (gap / size == (size - 1))
	{
		while (i >= 0)
		{
			if (grid[i][gap % size] > max)
			{
				max = grid[i][gap % size];
				count++;
			}
			i--;
		}
		if (pattern[size + gap % size] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int size, int **grid, int gap, int pattern[size *size])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (gap % size == (size - 1))
	{
		while (i < size)
		{
			if (grid[gap / size][i] > max)
			{
				max = grid[gap / size][i];
				count++;
			}
			i++;
		}
		if (pattern[size * 2 + gap / size] != count)
			return (1);
	}
	return (0);
}

int	check_cell(int size, int **grid, int gap, int pattern[size *size])
{
	if (check_row_left(size, grid, gap, pattern) == 1)
		return (1);
	if (check_row_right(size, grid, gap, pattern) == 1)
		return (1);
	if (check_col_down(size, grid, gap, pattern) == 1)
		return (1);
	if (check_col_up(size, grid, gap, pattern) == 1)
		return (1);
	return (0);
}
