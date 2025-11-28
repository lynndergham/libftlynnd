/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:37:27 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 01:35:55 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int main()
// {
//     char *s1 = "hello ";
//     char *s2 = "world";

//     char *joined = ft_strjoin(s1, s2);

//     if (joined)
//     {
//         printf("Joined string: %s\n", joined);  // Expected: "hello world"
//         free(joined); // Don’t forget to free!
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }