/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:48:38 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/15 12:27:17 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	argc = 0;
	j = 0;
	while (argv[0][j] != '\0')
	{
		write(1, &argv[0][j], 1);
		j++;
	}
	return (0);
}
