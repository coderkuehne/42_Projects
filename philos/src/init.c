/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:38:30 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 16:24:10 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

t_mutex	*init_mutexes(int fork_nbr)
{
	int		i;
	t_mutex	*ptr;

	i = 0;
	ptr = malloc(sizeof(t_mutex));
	ptr->dead = 0;
	ptr->forks = malloc(sizeof(pthread_mutex_t) * fork_nbr);
	ptr->num_philospher = fork_nbr;
	while (i < fork_nbr)
	{
		pthread_mutex_init(&ptr->forks[i], NULL);
		i++;
	}
	ptr->print = malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(ptr->print, NULL);
	ptr->is_dead = malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(ptr->is_dead, NULL);
	ptr->time = malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(ptr->time, NULL);
	ptr->meals = malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(ptr->meals, NULL);
	return (ptr);
}

void	init_philos(t_philo *args, t_mutex *ptr, char **argv, int argc)
{
	static int	i;

	if (!i)
		i = 0;
	args->philo_id = i;
	args->time_to_die = ft_atoi(argv[2]);
	args->time_to_eat = ft_atoi(argv[3]);
	args->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		args->num_meals = ft_atoi(argv[5]);
	else
		args->num_meals = -1;
	args->last_meals = 0;
	args->done = 0;
	args->mutex = ptr;
	i++;
}

t_philo	*init_struct(int argc, char **argv)
{
	int		i;
	int		fork_nbr;
	t_philo	*args;
	t_mutex	*ptr;

	i = -1;
	fork_nbr = atoi(argv[1]);
	args = malloc(sizeof(t_philo) * fork_nbr + 1);
	if (!args)
		return (NULL);
	ptr = init_mutexes(fork_nbr);
	while (++i < fork_nbr)
		init_philos(&args[i], ptr, argv, argc);
	return (args);
}

void	destroy_mutexes(t_philo *args, pthread_t *philo)
{
	int	i;

	i = 0;
	while (i < args->mutex->num_philospher)
		pthread_mutex_destroy(&args->mutex->forks[i++]);
	free(args->mutex->forks);
	pthread_mutex_destroy(args->mutex->print);
	free(args->mutex->print);
	pthread_mutex_destroy(args->mutex->is_dead);
	free(args->mutex->is_dead);
	pthread_mutex_destroy(args->mutex->time);
	free(args->mutex->time);
	pthread_mutex_destroy(args->mutex->meals);
	free(args->mutex->meals);
	free(args->mutex);
	free(args);
	free(philo);
}
