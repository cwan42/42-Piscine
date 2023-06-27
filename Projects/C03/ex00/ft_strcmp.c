/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:28:20 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/27 23:08:04 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Firstlettermatters";
	char	s2[] = "Comparedwill+-ASCIIvalues";
	char	s3[] = "lowerwillbepos,higherwillbeneg i.e.F70-C67=3";

	printf("Expected: 0, +, -\n Returned: ");
	printf("%d, ", ft_strcmp(s1, s1));
	printf("%d, ", ft_strcmp(s1, s2));
	printf("%d. ", ft_strcmp(s1, s3));
}
*/
