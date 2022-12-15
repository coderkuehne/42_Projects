/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:04:16 by kekuhne           #+#    #+#             */
/*   Updated: 2022/12/14 15:04:16 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				sign;
	int				res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] > 48 && str[i] < 57))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main(void)
{
	printf("my Atoi %d\n", ft_atoi("   \t\n     2147483655"));
	printf("Og Atoi %d\n", atoi("     \t \n       2147483655"));
	return (0);
}
