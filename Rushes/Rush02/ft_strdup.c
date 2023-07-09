/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:12:07 by hmoulard          #+#    #+#             */
/*   Updated: 2023/07/09 20:40:49 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*s;

	s = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isspace(src[i]))
		i++;
	while (i <= ft_strlen_notrail(src))
	{
		while (src[i] && ft_isspace(src[i]) && ft_isspace(src[i + 1]))
			i++;
		s[j] = src[i];
		j++;
		i++;
	}
	s[j] = '\0';
	return (s);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_strlen_notrail(char *src)
{
	int	i;

	i = ft_strlen(src) - 1;
	while (ft_isspace(src[i]))
		i--;
	return (i);
}
