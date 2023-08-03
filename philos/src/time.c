/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:43:00 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 16:07:35 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

long long	time_in_ms(void)
{
	struct timeval	ms;

	gettimeofday(&ms, NULL);
	return (ms.tv_sec * 1000LL + ms.tv_usec / 1000LL);
}

long long	check_timer(long long ms)
{
	long long	current_ms;

	current_ms = time_in_ms();
	return (current_ms - ms);
}

void	philo_eat(t_philo *args)
{
	long long	end_time;
	long long	current_time;
	long long	start_stime;

	print_message(args, "is eating");
	start_stime = time_in_ms();
	end_time = time_in_ms() + args->time_to_eat;
	while (1)
	{
		current_time = time_in_ms();
		if (current_time >= end_time)
			break ;
		usleep(1000);
	}
}

void	philo_sleep(t_philo *args)
{
	long long	end_time;
	long long	current_time;
	long long	start_stime;

	print_message(args, "is sleeping");
	start_stime = time_in_ms();
	end_time = time_in_ms() + args->time_to_sleep;
	while (1)
	{
		current_time = time_in_ms();
		if (current_time >= end_time)
			break ;
		usleep(1000);
	}
}
