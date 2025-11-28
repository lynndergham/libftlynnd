/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 01:39:22 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 01:48:33 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		*(temp++) = 0;
		n--;
	}
}

// int main(void)
// {
// 	void *s = "hello";
// 	ft_bzero(s, 4);
// 	printf("%s", (char *)s);
// }