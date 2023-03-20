/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:25:33 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/20 19:40:11 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (ft_isspace(argc[1][i]))
			i++;
		while (argc[1][i])
		{
			if (ft_isspace(argc[1][i]) && !ft_isspace(argc[1][i + 1]) && argc[1][i + 1] != '\0')
				write (1, " ", 1);
			else if (!ft_isspace(argc[1][i]))
				write (1, &argc[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
