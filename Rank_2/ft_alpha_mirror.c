/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:42:53 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/06 16:42:53 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
		{
			if (ft_isalpha(argc[1][i]) == 1)
				argc[1][i] = 109 - argc[1][i] + 110;
			else if (ft_isalpha(argc[1][i]) == 2)
				argc[1][i] = 77 - argc[1][i] + 78;
			write (1, &argc[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
