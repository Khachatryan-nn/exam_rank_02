/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:09:58 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/05 21:09:58 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		i = c - 'a';
		while (i-- >= 0)
			write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = c - 'A';
		while (i-- >= 0)
			write(1, &c, 1);
	}
	else
		write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		ft_print(argv[1][i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
