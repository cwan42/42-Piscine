/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:59:31 by hmoulard          #+#    #+#             */
/*   Updated: 2023/07/09 20:46:19 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error(int i)
{
	if (i == 1)
		write(2, "Error\n", 6);
	else
		write(2, "Dict Error\n", 11);
	return (-1);
}

void	ft_printchain(t_ch *chain)
{
	t_ch	*temp;

	temp = chain;
	while (temp->next)
	{
		ft_putstr(temp->line);
		ft_putstr(" ");
		temp = temp->next;
	}
	ft_putstr(temp->line);
	ft_putstr("\n");
}

int	main(int argc, char *argv[])
{
	t_ch		*dict;
	t_ch		*res;
	char		*path;
	char		*content;
	t_int		value;

	if (ft_check_arg(argc, argv, &path, &value) == 0)
		return (ft_error(1));
	if (ft_check_arg(argc, argv, &path, &value) == -1)
		return (ft_error(2));
	content = ft_open(path);
	if (!content)
		return (ft_error(2));
	dict = ft_create_dict(content);
	if (!dict)
		return (ft_error(2));
	res = ft_get_res(value, dict);
	if (!res)
		return (ft_error(1));
	ft_printchain(res);
	ft_bigfree_dict(dict);
	ft_bigfree_res(res);
	free(content);
	return (0);
}
