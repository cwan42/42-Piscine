/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:51:48 by cwan42            #+#    #+#             */
/*   Updated: 2023/07/12 00:04:08 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int	len_word;
	int	i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char **strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_str(str, charset) + 1));
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	index = 0;
	char **split;
	(void) argc;
	split = ft_split(argv[1], argv[2]);
	while (split[index])
	{
		printf("%s\n", split [index]);
		index++;
	}
}
*/
