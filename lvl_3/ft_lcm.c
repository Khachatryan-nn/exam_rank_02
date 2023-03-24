/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:31:27 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/22 19:48:03 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	a2;
	unsigned int	j;
	unsigned int	b2;

	i = 1;
	j = 1;
	a2 = a;
	b2 = b;
	if (a2 == 0 || b2 == 0)
		return (0);
	while (a2 != b2)
	{
		printf ("1\n");
		if (a2 < b2)
			a2 = a * ++i;
		else if (a2 > b2)
			b2 = b * ++j;
	}
	return (a2);
}

unsigned int lcm2(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		printf ("2\n");
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

int	main(void)
{
	printf("%d\n", lcm(13, 17));
	printf("%d\n", lcm2(17, 13));
}
