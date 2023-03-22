/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:55:12 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/22 19:27:25 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	main(void)
{

