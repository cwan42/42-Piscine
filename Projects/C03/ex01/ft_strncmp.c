/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:28:20 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/27 23:36:23 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int	result;

	c = 0;
	result = 0;
	while ((c < n) && !result && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		result = s1[c] - s2[c];
		c++;
	}
	if (c < n && !result && (s1[c] == '\0' || s2[c] == '\0'))
		result = s1[c] - s2[c];
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Should";
	char	s2[] = "Shoulbe4";
	char	s3[] = "Shoulerlength";
	unsigned int	size = 8;

	printf("Expected: 0, +2 , -1 \n Returned: ");
	printf("%d, ", ft_strncmp(s1, s1, size));
	printf("%d, ", ft_strncmp(s1, s2, size));
	printf("%d. ", ft_strncmp(s1, s3, size));
}
*/
