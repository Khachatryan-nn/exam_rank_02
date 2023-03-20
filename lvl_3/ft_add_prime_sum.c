/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prime_sum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:23:24 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/20 16:45:24 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rtrn_nmbr(char *str)
{
	int	i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		counter *= 10;
		counter += str[i] - '0';
		i++;
	}
	return (counter);
}

int	nmbr_is_prime(int	n)
{
	int	i;

	i = 1;
	while (++i < n)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

void	putnbr(int	nbr)
{
	char	c;

	if (nbr > 9)
	{
		putnbr (nbr / 10);
		putnbr (nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write (1, &c, 1);
	}
}

int main(int argv, char **argc)
{
	int	i;
	int n;
	int	counter;

	i = 2;
	n = 0;
	counter = 0;
	if (argv == 2)
	{
		n = rtrn_nmbr(argc[1]);
		while (i <= n)
		{
			if (nmbr_is_prime(i))
				counter += i;
			i++;
		}
		putnbr(counter);
	}
	write (1, "\n", 1);
	return (0);
}
