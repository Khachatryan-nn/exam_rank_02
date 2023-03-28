/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:04:12 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/28 01:18:05 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_finder(int num, int pnmb)
{
	int	i;

	i = 0;
	while (num > 1)
	{
		if (num % pnmb == 0)
		{
			if (i > 0)
				printf ("*%d", pnmb);
			else
				printf ("%d", pnmb);
			num /= pnmb;
			i++;
		}
		else
			pnmb++;
	}
}

int	main(int argv, char **argc)
{
	int	prime_num;
	int	num;

	prime_num = 2;
	if (argv == 2)
	{
		num = atoi(argc[1]);
		if (num == 1)
			printf ("1\n");
		else
		{
			ft_finder(num, prime_num);
		}
	}
	printf("\n");
}
