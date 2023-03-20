/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:20:27 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/20 20:17:45 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspc(char c)
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
		while (ft_isspc(argc[1][i]) && argc[1][i])
				i++;
		while (argc[1][i])
		{
			if (ft_isspc(argc[1][i]) && !ft_isspc(argc[1][i + 1]) && argc[1][i + 1] != '\0')
				write (1, "   ", 3);
			else if (!ft_isspc(argc[1][i]))
				write (1, &argc[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
