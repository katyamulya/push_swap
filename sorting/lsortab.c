/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsortab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:06:19 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 16:15:38 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_best_node_a(t_stack **a, t_stack **b)
{
	t_stack	*node;
	int		i_node;
	int		i_target;
	int		cost;

	node = *a;
	i_node = node->index;
	i_target = find_smalltarget(b, node->content);
	cost = costmovetop(a, b, i_node, i_target);
	node = node->next;
	while (node != NULL)
	{
		if (cost == 0)
			break ;
		i_target = find_smalltarget(b, node->content);
		if (costmovetop(a, b, node->index, i_target) < cost)
		{
			i_node = node->index;
			cost = costmovetop(a, b, i_node, i_target);
		}
		node = node->next;
	}
	return (i_node);
}

int	lsortab(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*node;
	int		i_node;
	int		i_target;
	int		cost;

	count = 0;
	while (ft_lst_size(*a) > 3)
	{
		//if (ft_lst_size(*a) < 4)
			//break ;
		i_node = find_best_node_a(a, b);
		node = *a;
		while (node->index != i_node & node != NULL)
			node = node->next;
		i_target = find_smalltarget(b, node->content);
		count += movetop(a, b, i_node, i_target);
		count += push(a, b);
	}
	return (count);
}
