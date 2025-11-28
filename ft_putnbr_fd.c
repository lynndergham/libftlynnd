/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:51:59 by minaim            #+#    #+#             */
/*   Updated: 2025/07/03 23:15:08 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}
// int main()
// {
// 	ft_putnbr_fd(1234, 1);       // prints: 1234
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-5678, 1);      // prints: -5678
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);          // prints: 0
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1); // prints: -2147483648
// 	write(1, "\n", 1);
// 	return 0;
// }
