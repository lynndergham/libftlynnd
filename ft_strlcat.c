/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 02:30:44 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 02:40:53 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_l;
	size_t	dst_l;

	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	if (dst_l >= size)
		dst_l = size;
	if (dst_l == size)
		return (size + src_l);
	if (src_l < size - dst_l)
		ft_memcpy(dst + dst_l, src, src_l + 1);
	else
	{
		ft_memcpy(dst + dst_l, src, size - dst_l - 1);
		dst[size - 1] = 0;
	}
	return (dst_l + src_l);
}
