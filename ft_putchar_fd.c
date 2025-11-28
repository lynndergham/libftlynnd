/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 23:18:23 by minaim            #+#    #+#             */
/*   Updated: 2025/07/03 23:24:48 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int main()
// {
// 	ft_putchar_fd('H', 1); // prints H to stdout
// 	ft_putchar_fd('\n', 1); // prints newline
// 	return (0);
// }
