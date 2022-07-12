/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:43:12 by sasalama          #+#    #+#             */
/*   Updated: 2022/07/12 12:25:01 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <string.h>
# include <unistd.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct t_table
{
	int	number_of_philosophers;
	int	*philosopher;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}	t_table;

int	number_of_philosophers(int philosophers);
int	time_to_die(int die_time);
int	time_to_eat(int eat_time);
int	time_to_sleep(int sleep_time);
int	number_of_times_each_philosopher_must_eat(int eat_number_time);
int	ft_atoi(const char *str);

#endif
