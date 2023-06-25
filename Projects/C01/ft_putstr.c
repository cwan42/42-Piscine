/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:12:36 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 18:51:49 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] !='\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putchar("Poop on a stick!\n")
	return (0);
}
*/
