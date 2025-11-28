/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 02:03:43 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 04:48:29 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	*tmp_d;
	size_t			i;

	tmp_s = (unsigned char *)src;
	tmp_d = (unsigned char *)dst;
	i = 0;
	if (tmp_d > tmp_s)
	{
		while (n > 0)
		{
			tmp_d[n - 1] = tmp_s[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tmp_d[i] = tmp_s[i];
			i++;
		}	
	}
	return (dst);
}
