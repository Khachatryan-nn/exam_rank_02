/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:04:12 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/27 20:25:02 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int	num)
{
	int	i;

	i = 1;
	while (++i < num)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}

int	ft_counter(int	num)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	while (num > 1)
	{
		if (num % j == 0)
		{
			i++;
			num /= j;
		}
		else
		{
			while (!ft_isprime(++j))
				;
		}
	}
	return (i);
}

int	*ft_set_array(int num, int len)
{
	int	i;
	int	j;
	int	*x;

	i = 0;
	j = 2;
	x = (int *)malloc(sizeof(int) * len);
	while (num > 1)
	{
		if (num % j == 0)
		{
			x[i++] = j;
			num /= j;
		}
		else
		{
			while (!ft_isprime(++j))
				;
		}
	}
	return (x);
}

int	main(int argv, char **argc)
{
	int	i;
	int	len;
	int	num;
	int	*array;

	i = 0;
	len = 0;
	num = 0;
	if (argv == 2)
	{
		num = atoi(argc[1]);
		len = ft_counter(num);
		array = ft_set_array(num, len);
		while (i < len)
		{
			if (i > 0)
				printf ("*");
			printf("%d", array[i++]);
		}
	}
	printf ("\n");
}
