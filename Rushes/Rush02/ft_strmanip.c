/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:03:08 by hmoulard          #+#    #+#             */
/*   Updated: 2023/07/09 20:48:49 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_int	ft_atoi(char *str)
{
	t_int	num;

	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (num);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_putstr(char *c)
{
	write(1, c, ft_strlen(c));
}

char	*ft_search(t_ch *begin_list, t_int value)
{
	t_ch	*temp;

	temp = begin_list;
	while (temp->next)
	{
		if (temp->value == value)
			return (temp->line);
		temp = temp->next;
	}
	if (temp->value == value)
		return (temp->line);
	return (NULL);
}
