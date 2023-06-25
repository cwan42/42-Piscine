/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:01 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/25 22:14:15 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*NOTE SRC must be <= DEST, otherwise buffer overflow
#include <stdio.h>

int	main(void)
{
	char src[] = "SOURCE";
	char dest[] = "DESTINATION";

	printf("%s, %s------", src, dest);
	ft_strcpy(dest, src);
	printf("%s, %s\n", src, dest);
	return (0);
}
*/
