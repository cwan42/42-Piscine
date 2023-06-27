/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 22:41:30 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/27 23:51:50 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dlen;
	unsigned int slen;
	unsigned int space;

	i = 0;
	dlen = 0;
	slen = 0;

	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	space = size - dlen - 1;
	while (src[i] != '\0' && i < space)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[28] = "Buffer is 28:";
	char src[] = "shldcutoffhereIFSEETHISDIE";
	size_t	buff = 28;

	printf("Total length %i, %s\n ", ft_strlcat(dest,src,buff), dest);
}
*/
