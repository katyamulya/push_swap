/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:30:24 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:49:19 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_stack **lst)
{
	t_stack	*node;
	t_stack	*s_node;

	if (ft_lst_size(*lst) > 1)
	{
		node = *lst;
		s_node = node->next;
		*lst = s_node;
		node->next = NULL;
		ft_lst_add_back(lst, node);
		ft_lst_index(lst);
		return (1);
	}
	return (0);
}
