/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:13:39 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/28 17:42:27 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	num_len(int nmbr)
{
	int	i;

	i = 1;
	if (nmbr < 0)
		i++;
	while (nmbr / 10)
	{
		i++;
		nmbr /= 10;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int		i;
	int 	len;
	char	*str;

	len = num_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	while (len > 0)
	{
		if (nbr < 0)
			str[--len] = -1 * (nbr % 10) + '0';
		else
			str[--len] = nbr % 10 + '0';
		if (len == 1 && nbr < 0)
			str[--len] = '-';
		nbr /= 10;
	}
	return (str);
}

int	main(void)
{
	char *a;

	a = ft_itoa(465);
	printf("%s\n", a);
	free(a);
	a = 0;
	a = ft_itoa(-4546898);
	printf ("%s\n", a);
	free(a);
	a = 0;
	a = ft_itoa(0);
	printf("%s\n", a);
	free(a);
	a = 0;
	return (0);
}
