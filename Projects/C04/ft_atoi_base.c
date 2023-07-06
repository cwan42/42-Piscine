/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:36 by cwan              #+#    #+#             */
/*   Updated: 2023/07/06 10:39:34 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_errorcheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_multr(char d, char *base, int mult, int nbr)
{
	int	c;

	c = 0;
	while (base[c] != '\0')
	{
		if (d == base[c])
			return (nbr + (mult * c));
		c++;
	}
	return (nbr);
}

int	ft_isbase(char n, char *base)
{
	int	c;

	c = 0;
	if ((n >= '\t' && n <= '\r') || n == ' ' || n == '+' || n == '_')
		return (1);
	while (base[c] != '\0')
	{
		if (base[c] == n)
			return (2);
		c++;
	}
	return (0);
}

int	ft_atoi_simple(char *str, char *base, int size, int start)
{
	int	c;
	int	s;
	int	result;
	int	multi;

	c = start - 1;
	s = 1;
	result = 0;
	multi = 1;
	while (c >= 0)
	{
		if (str[c] == '-')
			s *= (-1);
		if (ft_isbase(str[c], base) == 2)
		{
			result = ft_multr(str[c], base, multi, result);
			multi *= size;
		}
		c--;
	}
	return (result * s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (ft_errorcheck(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (ft_atoi_simple(str, base, size, i));
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("101101", "01"));
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	return (0);
}
*/
