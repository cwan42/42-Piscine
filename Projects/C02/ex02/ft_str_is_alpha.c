/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:05:10 by cwan              #+#    #+#             */
/*   Updated: 2023/06/26 13:21:12 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(const char*string)
{
	int	i;

	i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			i++;
		else if (string[i] >= 'A' && string[i] <= 'Z')
			i++;		
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	input_string[200];

	printf("Enter a sentence: ");
	scanf("%199s", input_string);
	printf("%d\n", ft_str_is_alpha(input_string));
	return (0);
}
*/
