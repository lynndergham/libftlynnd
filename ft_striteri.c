/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:08:30 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 01:12:39 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
// int	main(void)
// {
// 	char	str[] = "mira";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str,ft_toupper);
// 	printf("After:  %s\n", str);

// 	return (0);
// }
