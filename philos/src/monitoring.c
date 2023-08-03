/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:55:03 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 16:13:24 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	philo_is_dead(t_philo *args)
{
	print_message(args, "died");
	pthread_mutex_lock(args->mutex->is_dead);
	args->mutex->dead = 1;
	pthread_mutex_unlock(args->mutex->is_dead);
}

int	philos_done(t_philo *args)
{
	static int	done;

	if (!done)
		done = 0;
	pthread_mutex_lock(args->mutex->meals);
	if (args->done == 1)
	{
		done++;
		args->done = -1;
	}
	pthread_mutex_unlock(args->mutex->meals);
	return (done);
}

void	monitoring(t_philo *args, int num_philos)
{
	int	i;

	usleep(num_philos * 200);
	while (1)
	{
		i = 0;
		while (i < num_philos)
		{
			if (philos_done(&args[i]) == num_philos)
				return ;
			pthread_mutex_lock(args->mutex->time);
			if (check_timer(args[i].last_meals) >= args[i].time_to_die
				&& args[i].done != -1)
			{
				pthread_mutex_unlock(args->mutex->time);
				philo_is_dead(&args[i]);
				return ;
			}
			pthread_mutex_unlock(args->mutex->time);
			usleep(1000);
			i++;
		}
	}
}
