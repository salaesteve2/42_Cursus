/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:22:24 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/30 12:24:25 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	numero;

	numero = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			numero = 0;
		}
		i++;
	}
	return (numero);
}

int main()
{
    char *cadena = "2";
    int numero;

    numero = ft_str_is_alpha(cadena);
    printf("%d",numero);
}