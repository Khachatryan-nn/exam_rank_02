/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:07:10 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/22 19:12:04 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*x;

	i = 0;
	len = end - start + 1;
	x = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		x[i] = start++;
		i++;
	}
	return (x);
}

int	main(void)
{
	int	*x;
	int	i;

	i = 0;
	x = ft_range(-5, 4);
	while (i < 10)
	{
		printf("%d\n", x[i]);
		i++;
	}
}
