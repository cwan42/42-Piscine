/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 22:13:08 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/27 23:40:51 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (str + i);
		i++;
		c = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "I like big butts and I cannot lie.";
	char	to_find[] = "big butts";
	printf("%s", ft_strstr(str,to_find));
	return (0);
}
*/
