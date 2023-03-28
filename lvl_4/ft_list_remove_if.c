/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tikhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:09:55 by tikhacha          #+#    #+#             */
/*   Updated: 2023/03/28 20:13:17 by tikhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef	struct s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

void	ft_list_remove_if(t_list **begin_list, void	*data_red, int (*cmp)())
{
	t_list	*temp;
	t_list	*ptr;
	int	i;

	if (!begin_list || !*begin_list)
		return ;
	ptr = *begin_list;
	i = 0;
	temp = ptr;
	while (*ptr != NULL)
	{
		temp = ptr;
		if (!cmp(ptr->data, data_red))
		{
			
