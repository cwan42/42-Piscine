/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:14:39 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/28 18:21:12 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	caps;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	caps = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (caps == 1)
				str[i] -= 32;
			caps = 0;
		}
	 	else if (str[i] >= 48 && str[i] <= 57)
			caps = 0;
		else
			caps = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "salut, comment tu va ? 42mots qua-deux; cin+et+un";
	char str2[] = "rAnDoma~sSor /alkj &ad 54a-soup poop., var";

	printf("%s\n", str1);
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", str2);
	printf("%s\n", ft_strcapitalize(str2));
}
*/
