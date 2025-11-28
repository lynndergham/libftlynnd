/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:48:48 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 02:26:13 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_l;

	src_l = ft_strlen(src);
	if (src_l + 1 < size)
		ft_memcpy(dst, src, src_l + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_l);
}
