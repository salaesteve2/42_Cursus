/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:10:31 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/16 12:06:35 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (s)
	{
		while (s[x])
		{
			write(fd, &s[x], 1);
			x++;
		}
	}
}
