/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:03:58 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/05 19:15:50 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	writenum(char n)
{
	write (1, &n, 1);
}

static void	putnbr(int nmbr)
{
	if (nmbr > 9)
	{
		putnbr(nmbr / 10);
		putnbr(nmbr % 10);
	}
	else
		writenum(nmbr + '0');
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write (1, "fizz", 5);
		else if (i % 5 == 0)
			write (1, "buzz", 5);
		else
			putnbr (i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
