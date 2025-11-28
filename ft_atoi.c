/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minaim <minaim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:24:26 by minaim            #+#    #+#             */
/*   Updated: 2025/07/04 04:30:55 by minaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int ft_atoi(const char *str); // prototype

// int main()
// {
//     printf("%d\n", ft_atoi("  q"));      // -42
//     printf("%d\n", ft_atoi("123abc"));      // 123
//     printf("%d\n", ft_atoi("   +789"));     // 789
//     printf("%d\n", ft_atoi("abc"));         // 0
//     printf("%d\n", ft_atoi("  \t\n  15"));  // 15

//     return 0;
// }
