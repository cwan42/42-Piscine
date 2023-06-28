/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 01:52:11 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/29 01:54:31 by cwan42           ###   ########.fr       */
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

	v = 1;
	while (v < argc)
	{
		i = 0;
		while (argv[v][i] != '\0')
		{
			ft_putchar(argv[v][i]);
			i++;
		}
		ft_putchar('\n');
		v++;
	}
	return (0);
}
