/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 02:46:48 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 02:48:26 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	temp;

	str = (unsigned char *)s;
	temp = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == temp)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
