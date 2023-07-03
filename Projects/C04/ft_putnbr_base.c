/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:14:37 by cwan              #+#    #+#             */
/*   Updated: 2023/07/03 15:09:00 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_pol(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if ((base[i]) != '+' && (base[i]) != '-')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_same_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr, unsigned int len_base, char *base)
{
	unsigned int	a;

	if (nbr < 0)
	{
		a = -nbr;
		write(1, "-", 1);
	}
	else
		a = nbr;
	if (a >= len_base)
	{
		ft_putnbr((a / len_base), len_base, base);
		ft_putnbr((a % len_base), len_base, base);
	}
	else
		write(1, &base[a], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;

	len_base = ft_strlen(base);
	if (len_base < 2)
		return ;
	if (ft_str_pol(base) == 0)
		return ;
	if (ft_same_char(base) == 0)
		return ;
	ft_putnbr(nbr, len_base, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-12, "01");
	write(1, "\n", 1);
	ft_putnbr_base(141440, "poneyvif");
}
*/
