/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:13:18 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 16:32:26 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	print_message(t_philo *args, char *message)
{
	pthread_mutex_lock(args->mutex->is_dead);
	if (!args->mutex->dead)
	{
		pthread_mutex_lock(args->mutex->print);
		printf("%lld %d %s\n", check_timer(args->mutex->run_time),
			args->philo_id + 1, message);
		pthread_mutex_unlock(args->mutex->print);
	}
	pthread_mutex_unlock(args->mutex->is_dead);
}

void	*routine(void *ptr)
{
	t_philo	*args;

	args = (t_philo *)ptr;
	pthread_mutex_lock(args->mutex->time);
	args->last_meals = args->mutex->run_time;
	pthread_mutex_unlock(args->mutex->time);
	print_message(args, "is thinking");
	if (args->philo_id % 2 != 0)
		usleep(1500);
	while (!philo_dead(args))
	{
		eat(args);
		if (!meals_left(args))
			return (NULL);
		philo_sleep(args);
		print_message(args, "is thinking");
	}
	return (NULL);
}

void	create_threads(pthread_t *philo, t_philo *args, char **argv)
{
	int	i;
	int	num_philos;

	i = 0;
	num_philos = args->mutex->num_philospher;
	while (i <= args->mutex->num_philospher)
	{
		if (i == atoi(argv[1]))
			monitoring(args, num_philos);
		else
			pthread_create(&philo[i], NULL, routine, (void *)&args[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int			i;
	t_philo		*args;
	pthread_t	*philo;

	i = 0;
	if (!check_input(argv, argc))
		return (0);
	args = init_struct(argc, argv);
	if (!args)
		exit(1);
	philo = malloc(sizeof(pthread_t) * args->mutex->num_philospher + 1);
	if (!philo)
		exit(2);
	args->mutex->run_time = time_in_ms();
	create_threads(philo, args, argv);
	while (i < args->mutex->num_philospher)
		pthread_join(philo[i++], NULL);
	destroy_mutexes(args, philo);
	return (0);
}
