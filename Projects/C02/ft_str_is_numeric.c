/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:05:10 by cwan              #+#    #+#             */
/*   Updated: 2023/06/26 15:17:08 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(const char*string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= '0' && string[i] <= '9')
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
	printf("%d\n", ft_str_is_numeric(input_string));
	return (0);
}
*/
