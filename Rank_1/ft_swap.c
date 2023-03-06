/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <tikhacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:57:45 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/05 21:10:01 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

#include <stdio.h>no

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_swap(&a, &b);
	printf("result:now a = %d and b = %d\n", a, b);
}
