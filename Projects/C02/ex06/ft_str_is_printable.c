/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:00:17 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/26 21:14:17 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32) && (str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("Check if sentences contain only printable chars: \n");
	printf("Sentence 1 returns %d\n", ft_str_is_printable("\n\t\v\f"));
	printf("Sentence 2 returns %d\n", ft_str_is_printable("all char"));
	printf("Sentence 3 returns %d\n", ft_str_is_printable("1314525"));
}
