/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:22:02 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 04:57:27 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
char *ft_substr(char const *s, unsigned int start, size_t len); // Prototype

int main()
{
    char *s1 = "hello world";

    char *sub1 = ft_substr(s1, 0, 5);   // → "hello"
    char *sub2 = ft_substr(s1, 6, 5);   // → "world"
    char *sub3 = ft_substr(s1, 6, 10);  // → "world"
    char *sub4 = ft_substr(s1, 20, 5);  // → "" (empty string)
    char *sub5 = ft_substr(s1, 3, 2);   // → "lo"

    printf("sub1: %s\n", sub1);
    printf("sub2: %s\n", sub2);
    printf("sub3: %s\n", sub3);
    printf("sub4: %s\n", sub4);
    printf("sub5: %s\n", sub5);

    // Don't forget to free them
    free(sub1);
    free(sub2);
    free(sub3);
    free(sub4);
    free(sub5);

    return 0;
}

*/