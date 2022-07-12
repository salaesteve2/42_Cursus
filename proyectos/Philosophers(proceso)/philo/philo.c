/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:49:09 by sasalama          #+#    #+#             */
/*   Updated: 2022/07/11 12:51:38 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Funciones permitidas
	memset: sustituir n caracteres de una string
	printf: escribir
	malloc: reservar memoria
	free: liberar memoria
	write: escribir
	usleep: suspende la ejecucion durante un intervalo de microsegundos
	gettimeofday: obtiene la hora del reloj del sistema
	pthread_create: crea un hilo
	pthread_detach: separa un hilo
	pthread_join: unirse con un hilo terminado
	pthread_mutex_init: inicializa un mutex
	pthread_mutex_destroy: destruye un mutex
	pthread_mutex_lock: bloquea un mutex
	pthread_mutex_unlock: libera un mutex
*/
#include "philo.h"

void	ft_create_philosophers(t_table *philosiphers)
{
	int	x;
	int	y;

	x = 0;
	y = philosiphers->number_of_philosophers;
	philosiphers->philosopher = malloc((size_of(int)) * (y));
	while (x < y)
	{
		philosiphers->philosopher[x] = x;
		x++;
	}
}

void	ft_process_arguments(char *argv[])
{
	t_table	philosophers;

	philosophers.number_of_philosophers = ft_atoi(argv[1]);
	philosophers.time_to_die = ft_atoi(argv[2]);
	philosophers.time_to_eat = ft_atoi(argv[3]);
	philosophers.time_to_sleep = ft_atoi(argv[4]);
	philosophers.number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
	ft_create_philosophers(&philosophers);
}

int	main(int argc, char *argv[])
{
	if (argc == 6)
		ft_process_arguments(argv);
	else
		printf("Error en numero de argumentos\n");
	return (0);
}
