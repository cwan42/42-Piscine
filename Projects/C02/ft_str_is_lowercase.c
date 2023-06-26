/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:47:15 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/26 20:49:06 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{

	char inputstr[200];

	printf("Enter a sentence to check if it's only lowercase letters: ");
	scanf("%s", inputstr);
	printf("%d\n", ft_str_is_lowercase(inputstr));
}
