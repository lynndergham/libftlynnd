/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:10:48 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 05:12:01 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char s)
{
	if (c == s || c == '\0')
		return (1);
	return (0);
}

int	count_words(const char *str, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (is_separator(*str, c))
			word = 0;
		else if (!word)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*malloc_word(const char *start, char c)
	{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (start[len] && !is_separator(start[len], c))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	char	**result;

	result = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_separator(*str, c))
		{
			result[i++] = malloc_word(str, c);
			while (*str && !is_separator(*str, c))
				str++;
		}
		else
			str++;
	}
	result[i] = 0;
	return (result);
}
