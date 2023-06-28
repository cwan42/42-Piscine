/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:41:41 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/29 01:30:09 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb);
	else
		while (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
}

void	process(int num, int nDepth)
{
	int	nCmp;

	nCmp = 0;
	while (nCmp <= nDepth)
	{
		ft_put
	}
}

void	ft_print_combn(int n)
{
	int	c;
	int	array;

	c = 0;
	while (c < n)
		ar

	
	
}
//make it recursive to auto drop ns i.e. /10 %10
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
