/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:10:54 by Kekuhne           #+#    #+#             */
/*   Updated: 2023/08/01 16:11:49 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/time.h>
# include <errno.h>
# include <pthread.h>
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

typedef struct s_mutex
{
	int				num_philospher;
	pthread_mutex_t	*forks;
	pthread_mutex_t	*print;
	pthread_mutex_t	*is_dead;
	pthread_mutex_t	*time;
	pthread_mutex_t	*meals;
	int				dead;
	long long		run_time;
}				t_mutex;

typedef struct s_philo
{
	int				philo_id;
	int				time_to_eat;
	int				time_to_sleep;
	int				time_to_die;
	int				num_meals;
	int				done;
	long long		last_meals;
	t_mutex			*mutex;
}			t_philo;

int			main(int argc, char **argv);
t_philo		*init_struct(int argc, char **argv);
t_mutex		*init_mutexes(int fork_nbr);
int			check_input(char **argv, int argc);
int			ft_atoi(const char *str);
long long	time_in_ms(void);
long long	check_timer(long long ms);
void		eat(t_philo *args);
void		philo_sleep(t_philo *args);
int			meals_left(t_philo *args);
void		print_message(t_philo *args, char *message);
int			philo_dead(t_philo *args);
void		monitoring(t_philo *args, int num_philos);
void		philo_sleep(t_philo *args);
void		philo_eat(t_philo *args);
void		destroy_mutexes(t_philo *args, pthread_t *philo);

#endif