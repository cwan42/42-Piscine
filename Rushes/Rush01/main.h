/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:08 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 14:38:26 by kayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int	check_adjacent_cell(int size, int **grid, int gap, int num);
/* return if the number given already exist in the row and column where it is */

int	puzzle_solver(int size, int **grid, int pattern[size*size], int gap);
/* solver function, takes a matrix of `int` and an array */
/*of all entries as arguments, return 1 if solution exist and 0 if not */

#endif
