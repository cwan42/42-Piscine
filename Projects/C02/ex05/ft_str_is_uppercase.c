/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:50:23 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/26 20:59:35 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A') && (str[i] <= 'Z'))
			return (0);
		else
			i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	inputstr[200];

	printf("Enter sentence to check if only uppercase: ");
	scanf("%199s", inputstr);
	printf("%d\n", ft_str_is_uppercase(inputstr));
}
