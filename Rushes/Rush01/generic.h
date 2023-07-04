/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:51:01 by mgama             #+#    #+#             */
/*   Updated: 2023/07/02 14:35:42 by kayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERIC_H
# define GENERIC_H

void	ft_putchar(char c);
/* write a single `char` */

void	ft_putstr(char *str);
/* write all char of a srting */

int		ft_strlen(char *str);
/* return the length of a string */

int		ft_atoi(char *str);
/* reprocuce atoi function, takes a sting and convert it in `int` */

void	ft_putnbr(int nb);
/* write an `int` */

#endif
