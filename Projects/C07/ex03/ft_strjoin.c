/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:03:32 by cwan42            #+#    #+#             */
/*   Updated: 2023/07/06 23:23:23 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_totallen(char **strings, int size, int seplen)
{
	int	finallen;
	int	i;

	finallen = 0;
	i = 0;
	while (i < size)
	{
		finallen += ft_strlen(strings[i]);
		finallen += seplen;
		i++;
	}
	finallen -= seplen;
	return (finallen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	full_length;
	int	i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_totallen(strs, size, ft_strlen(sep));
	string = (char*)malloc((full_length + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
	}
	*d = '\0';
	return (string);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a[] = {"abcd", "efgh", "ijkl1234"};

	printf("%s", ft_strjoin(3, a, "--"));
	return (0);
}
*/
