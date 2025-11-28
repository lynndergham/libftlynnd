/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:56:35 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 01:36:47 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// char *ft_strrchr(const char *s, int c);

// int main()
// {
//     const char *text = "hello world";

//     printf("%s\n", ft_strrchr(text, 'l'));  // Expected: "ld"
//     printf("%s\n", ft_strrchr(text, 'o'));  // Expected: "orld"
//     printf("%s\n", ft_strrchr(text, 'z'));  // Expected: (null)
//     printf("%s\n", ft_strrchr(text, '\0')); // Expected: "" (empty line)

//     return 0;
// }