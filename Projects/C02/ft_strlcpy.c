/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:46:44 by cwan              #+#    #+#             */
/*   Updated: 2023/06/27 17:06:04 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int d;

	c = 0;
	d = 0;
	while (src[c] != '\0')
		c++;
	if (d != '\0')
	{
		while ((src[c] != '\0') && (d < size -1))
		{
				dest[c] = src[c];
				c++;
		}
		dest[c] = '\0';
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char 	src[] = "Source";
	char	dest[] = "dest";
	unsigned int 	n = 4;

	printf("Before: src Source / dest dest.\nAfter: ");
	n = ft_strlcpy(dest, src, n);
	printf("%s,%s,%d", src, dest, n);
	return(0);	
}
