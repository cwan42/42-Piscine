/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:41:41 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/29 14:15:24 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_digitcmp(char *mintab, char *maxtab, int n)
{
	int	i;

	i = 0;
	if (mintab[0] == maxtab[0])
	{
		while (i < n )
			ft_putchar(mintab[i++]);
		ft_putchar(' ');
		return;
	}
}

void	ft_print_combn(int n)
{
	char	mintab[n];
	char	maxtab[n];
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n < 10 && n > 0)
	{
		while (i < n)
		{
			mintab[i] = '0' + i;
			maxtab[i] = (10 - n) + i + '0';
			++i;
		}
		ft_digitcmp(mintab, maxtab, n);
		while (mintab[0] != maxtab[0])
		{
			i = n - 1;
			while (mintab[i] == maxtab[i])
				--i;
			j = ++(mintab[i]);
			while (i < n)
				mintab[++i] = ++j;
			ft_digitcmp(mintab, maxtab, n);
		}		
	}
	else
		write (1, "Invalid entry", 14);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
