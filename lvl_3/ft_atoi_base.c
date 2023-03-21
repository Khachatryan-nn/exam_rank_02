/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:18:33 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/21 19:59:20 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int counter;

	i = 0;
	sign = -1;
	counter = 0;
	if (str[i] == '-')
		sign = ++i;
	while (str[i])
	{
		counter *= str_base;
		if (str[i] >= 'A' && str[i] <= 'F')
			counter += str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'f')
			counter += str[i] - 'a' + 10;
		else
			counter += str[i] - '0';
		i++;
	}
	return (counter * (-1 * sign));
}

int	main(int argv, char **argc)
{
	if (argv == 2)
	{
		printf("2:%d\n", ft_atoi_base(argc[1], 2));
		printf("4:%d\n", ft_atoi_base(argc[1], 4));
		printf("8:%d\n", ft_atoi_base(argc[1], 8));
		printf("3:%d\n", ft_atoi_base(argc[1], 3));
		printf("16:%d\n", ft_atoi_base(argc[1], 16));
	}
}
