/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:58:03 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 05:02:36 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

#include <stdlib.h>

int	ft_match(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_match(s1[start], set))
		start++;
	while (end > start && ft_match(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc((end - start) + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// int main()
// {
// 	char *s = "+++hello+++";
// 	char *set = "+";
// 	char *trimmed = ft_strtrim(s, set);

// 	printf("Trimmed: \"%s\"\n", trimmed);  // Output: "hello"
// 	free(trimmed);

// 	return 0;
// }
