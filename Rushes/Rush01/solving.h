/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:13 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 14:41:37 by kayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVING_H
# define SOLVING_H

int	check_cell(int size, int **grid, int gap, int pattern[size*size]);
/* check if proposed number should be in the current cell */

int	check_col_up(int size, int **grid, int gap, int pattern[size*size]);
/* check if proposed number fulfills the conditions from top */

int	check_row_right(int size, int **grid, int gap, int patern[size*size]);
/* check if proposed number fulfills the conditions from right side */

int	check_col_down(int size, int **grid, int gap, int pattern[size*size]);
/* check if proposed number fulfills the conditions from bottom */

int	check_row_left(int size, int **grid, int gap, int pattern[size*size]);
/* check if proposed number fulfills the conditions from left side */

#endif
