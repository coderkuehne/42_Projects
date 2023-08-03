/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:44:56 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 19:11:00 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	philo_dead(t_philo *args)
{
	if (args->mutex->num_philospher == 1)
	{
		print_message(args, "has taken a fork");
		usleep(args->time_to_die * 1000);
		print_message(args, "died");									
	}
	pthread_mutex_lock(args->mutex->is_dead);
	if (args->mutex->dead == 1)
	{
		pthread_mutex_unlock(args->mutex->is_dead);
		return (1);
	}
	pthread_mutex_unlock(args->mutex->is_dead);
	return (0);
}

void	eat(t_philo *args)
{
	pthread_mutex_lock(&args->mutex->forks[args->philo_id]);
	print_message(args, "has taken a fork");
	pthread_mutex_lock(&args->mutex->forks[(args->philo_id + 1)
		% args->mutex->num_philospher]);
	print_message(args, "has taken a fork");
	pthread_mutex_lock(args->mutex->time);
	args->last_meals = time_in_ms();
	pthread_mutex_unlock(args->mutex->time);
	philo_eat(args);
	pthread_mutex_unlock(&args->mutex->forks[args->philo_id]);
	pthread_mutex_unlock(&args->mutex->forks[(args->philo_id + 1)
		% args->mutex->num_philospher]);
}

int	meals_left(t_philo *args)
{
	pthread_mutex_lock(args->mutex->meals);
	if (args->num_meals != -1)
	{
		args->num_meals -= 1;
		if (args->num_meals == 0)
		{
			args->done = 1;
			pthread_mutex_unlock(args->mutex->meals);
			return (0);
		}
	}
	pthread_mutex_unlock(args->mutex->meals);
	return (1);
}
