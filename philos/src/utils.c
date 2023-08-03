/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:40:37 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 19:01:44 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_is_all_num(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 48 || c > 57)
			return (0);
		i++;
	}
	return (1);
}

int	check_input(char **argv, int argc)
{
	int	i;

	i = 1;
	if (argc < 5 || argc > 6)
	{
		ft_putstr_fd("Invalid argument: argument count", 2);
		return (0);
	}
	while (argv[i])
	{
		if (!ft_is_all_num(argv[i]) || atoi(argv[i]) >= INT_MAX || atoi(argv[i]) == 0)
		{
			ft_putstr_fd("Invalid argument: found negativ or non numeric", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
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
	while ((str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
