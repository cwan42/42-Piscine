/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:15:16 by cwan              #+#    #+#             */
/*   Updated: 2023/06/29 11:28:15 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	v;

	v = argc - 1;
	while (v > 0)
	{
		i = 0;
		while (argv[v][i] != '\0')
		{
			ft_putchar(argv[v][i]);
			i++;
		}
		ft_putchar('\n');
		v--;
	}
	return (0);
}
