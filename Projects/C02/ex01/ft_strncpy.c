/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:16:37 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 22:49:52 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	i;
	i = 0;

	while (i < n && src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "BEFORRRE";
	char dest[] = "after";
	size_t n = sizeof(dest) - 1;

	printf("%s -- %s ------", src, dest);
	ft_strncpy(dest, src, n);
	printf("%s, %s\n", src, dest);
	return (0);
}
*/
