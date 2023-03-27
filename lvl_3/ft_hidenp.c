/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:18:23 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/22 19:23:09 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argv == 3)
	{
		while (argc[1][i])
		{
			while (argc[1][i] != argc[2][j] && argc[2][j])
				j++;
			if (argc[2][j] == '\0' && argc[1][i] != '\0')
			{
				write (1, "0\n", 2);
				return (0);
			}
			i++;
		}
		write (1, "1", 1);
	}
	write (1, "\n", 1);
}