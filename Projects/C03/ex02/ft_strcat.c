/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:52:55 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/27 23:08:33 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Hello there, ";
	char src[] = "General Kenobi.\n";
	printf("%s", ft_strcat(dest, src));
}
*/
