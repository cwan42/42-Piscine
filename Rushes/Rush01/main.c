/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:34 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 20:06:54 by kayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "solving.h"
#include "parsing.h"
#include "generic.h"
#include <stdlib.h>

int	matsize(char *argv[])
{
	int	size;
	int	count;

	size = 0;
	count = 0;
	if (argv[1] == NULL)
		return (0);
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] != ' ')
		{
			size++;
		}
		count++;
	}
	size = size / 4;
	return (size);
}

int	**initgrid(int i, int j, int **grid, int size)
{
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int));
		i++;
	}
	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	check_adjacent_cell(int size, int **grid, int gap, int num)
{
	int	i;

	i = 0;
	while (i < gap / size)
	{
		if (grid[i][gap % size] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < gap % size)
	{
		if (grid[gap / size][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	puzzle_solver(int size, int **grid, int pattern[size*size], int gap)
{
	int	num;

	if (gap == (size * size))
		return (1);
	num = 0;
	while (++num <= size)
	{
		if (check_adjacent_cell(size, grid, gap, num) == 0)
		{
			grid[gap / size][gap % size] = num;
			if (check_cell(size, grid, gap, pattern) == 0)
			{
				if (puzzle_solver(size, grid, pattern, gap + 1) == 1)
					return (1);
			}
			else
			{
				grid[gap / size][gap % size] = 0;
			}
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	size;
	int	**grid;
	int	*pattern;

	i = 0;
	size = matsize(argv);
	if (check_arguments(size, argv, argc) == 1)
		return (1);
	grid = malloc(size * sizeof(int *));
	grid = initgrid(0, 0, grid, size);
	pattern = convert_pattern(argv[1], size);
	if (!pattern)
		return (1);
	if (puzzle_solver(size, grid, pattern, 0) == 1)
		print_puzzle_grid(size, grid);
	else
		ft_putstr("Error\n");
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	return (0);
}
