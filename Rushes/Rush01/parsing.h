/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:11 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 14:40:26 by kayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

int		check_arguments(int size, char *argv[], int argc);
/* check if arguments given to the main function are as expected */

int		*convert_pattern(char *str, int size);
/* takes a string representing each points 
of view of the puzzle and convert it in an array of `int` */

void	print_puzzle_grid(int size, int **grid);
/* display a 4X4 grid given */

#endif
