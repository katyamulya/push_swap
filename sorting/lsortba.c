/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsortba.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:07:26 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/21 16:54:50 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_best_node_b(t_stack **a, t_stack **b)
{
	t_stack	*node;
	int		i_node;
	int		i_target;
	int		cost;

	node = *a;
	i_node = node->index;
	i_target = find_bigtarget(b, node->content);
	cost = costmovetop(a, b, i_node, i_target);
	node = node->next;
	while (node != NULL)
	{
		if (cost == 0)
			break ;
		i_target = find_bigtarget(b, node->content);
		if (costmovetop(a, b, node->index, i_target) < cost)
		{
			i_node = node->index;
			cost = costmovetop(a, b, i_node, i_target);
		}
		node = node->next;
	}
	return (i_node);
}

int	lsortba(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*node;
	int		i_node;
	int		i_target;
	int		cost;

	count = 0;
	while (ft_lst_size(*b) > 0)
	{
		i_node = find_best_node_b(b, a);
		node = *b;
		while (node->index != i_node && node != NULL)
			node = node->next;
		i_target = find_bigtarget(a, node->content);
		count += movetop(a, b, i_node, i_target);
		count += push(b, a, 2);
	}
	return (count);
}
