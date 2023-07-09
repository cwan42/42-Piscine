/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:28:05 by hmoulard          #+#    #+#             */
/*   Updated: 2023/07/09 20:47:37 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_ch	*create_elem(t_int value, char *line)
{
	t_ch	*res;

	res = malloc(sizeof(t_ch));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->value = value;
	res->line = line;
	return (res);
}

void	ft_push_front(t_ch **begin_list, t_int value, char *line)
{
	t_ch	*deb;

	deb = create_elem(value, line);
	if (deb)
	{
		if (*begin_list)
		{
			deb->next = *begin_list;
		}
		*begin_list = deb;
	}
}

t_ch	*ft_find_end(t_ch *begin)
{
	t_ch	*temp;

	temp = begin;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_push_back(t_ch **begin_list, t_ch *elem)
{
	t_ch	*temp;

	if (!elem)
		return ;
	if (!*begin_list)
		*begin_list = elem;
	else
	{
		temp = ft_find_end(*begin_list);
		temp->next = elem;
	}
}
