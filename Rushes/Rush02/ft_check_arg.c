/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piele-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:16:19 by piele-bo          #+#    #+#             */
/*   Updated: 2023/07/09 20:33:55 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	as_minus(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		if (c[i++] == '-')
			return (1);
	return (0);
}

int	ft_check_arg(int argc, char **argv, char **path, t_int *value)
{
	if (argc >= 2 && argc <= 3)
	{
		if (argc == 3)
		{
			if (check_ext(argv[1], ".dict") == 1)
			{	
				*path = argv[1];
				if (!ft_is_digit(argv[2]))
					return (0);
				*value = ft_atoi(argv[2]);
				if ((ft_strlen(argv[2]) < 39) && *value <= 4294967295)
					return (1);
			}
		}
		else
		{
			*path = "numbers.dict";
			if (!ft_is_digit(argv[1]))
				return (0);
			*value = ft_atoi(argv[1]);
			if ((ft_strlen(argv[1]) < 39) && *value <= 4294967295)
				return (1);
		}
	}
	return (0);
}

int	check_ext(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (-1);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == 0 && str[i + j] == 0)
				return (1);
		}
		i++;
	}
	return (0);
}
