/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:37 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 20:40:56 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "generic.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr1(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
}

int	check_arguments2(char *argv[])
{
	int	check;

	check = (ft_strlen(argv[1]) + 1) % 4;
	if (((ft_strlen(argv[1]) < 31) || ((ft_strlen(argv[1]) > 71)
				&& (check != 0))))
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

/* check if the partern is correct */
/* for each char at index i check if it is a valid digit */
int	check_arguments(int size, char *argv[], int argc)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (check_arguments2(argv) == 1)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = ft_atoi(str + i);
			if (j < 0 || j > size)
				return (1);
		}
		i++;
	}
	return (0);
}

/* creates an array with malloc of size 16, if not return 0 as error */
/* for each char at index i convert it to `int` */
int	*convert_pattern(char *str, int size)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int) * (size * size));
	if (!tab)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
		i++;
	}
	return (tab);
}

/* loop inside rows and columns */
/* display each cell */
void	print_puzzle_grid(int size, int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putnbr(grid[i][j]);
			if (j < (size - 1))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
