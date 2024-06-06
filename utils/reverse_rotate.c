/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:31:04 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:49:08 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate(t_stack **lst)
{
	t_stack	*top_node;
	t_stack	*last_node;

	if (ft_lst_size(*lst) > 1)
	{
		top_node = *lst;
		last_node = ft_lst_last(top_node);
		while (top_node)
		{
			if (top_node->next->next == NULL)
			{
				top_node->next = NULL;
				break ;
			}
			top_node = top_node->next;
		}
		last_node->next = *lst;
		*lst = last_node;
		ft_lst_index(lst);
		return (1);
	}
	return (0);
}
