/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_uno.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:07:31 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 17:23:19 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);

int	procesar_uno(char *cadena, int nb)
{
	int	j;

	j = 0;
	if (nb < 11)
	{
		while (j < 690 && nb % 10 != 0)
		{
			if (cadena[j] == (nb % 10) + '0')
			{
				while (j < 690)
				{
					if (cadena[j] >= 'a' && cadena[j] <= 'z')
						print_char(cadena[j]);
					if (cadena[j] == '\n')
						return (1);
					j++;
				}
			}
			j++;
		}
	}
	return (1);
}
