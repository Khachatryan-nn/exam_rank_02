/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:55:12 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/27 16:55:35 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int main(void) {
    // create a linked list
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    head->data = 0;
    head->next = second;
    second->data = 0;
    second->next = third;
    third->data = 0;
    third->next = NULL;

    // test the ft_list_size function
    int size = ft_list_size(head);
    printf("The size of the linked list is: %d\n", size);

    // free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
