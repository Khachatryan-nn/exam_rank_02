#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

void	print_int(void *data)
{
	printf("%d\n", *(int *)data);
	return ;
}

int     main(void)
{
    t_list *list = NULL;
	t_list *begin_list;
	t_list *temp;
    int    *data;
    int     i;

    // Create a linked list of integers from 0 to 4
	begin_list = list;
	temp = list;
    for (i = 0; i < 5; i++)
    {
        data = malloc(sizeof(int));
        *data = i;
        list = malloc(sizeof(t_list));
        list->next = NULL;
        list->data = data;
		if (i == 0)
		{
			temp = list;
			begin_list = list;
		}
		else
		{
			temp->next = list;
			temp = temp->next;
		}
    }

    // Print the linked list using the ft_list_foreach function
    ft_list_foreach(begin_list, &print_int);

    // Free the memory allocated for the linked list
    while (list != NULL)
    {
        free(list->data);
        t_list *next = list->next;
        free(list);
        list = next;
    }
}
