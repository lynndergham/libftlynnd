/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 01:53:40 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 02:02:27 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_d = (unsigned char *) dst;
	tmp_s = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_d++) = *(tmp_s++);
		n--;
	}
	return (dst);
}
