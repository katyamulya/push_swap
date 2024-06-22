/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movetop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:50:42 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/21 17:02:12 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	movetop1(t_stack **a, t_stack **b, int i_node, int i_target)
{
	int	m;
	int	n;

	n = ft_lst_size(*b) - i_node;
	m = ft_lst_size(*a) - i_target;
	if (n < m)
		return (l_rr_reverse_rotate(b, a, n) + l_reverse_rotate(a, (m - n), 1));
	else
		return (l_rr_reverse_rotate(b, a, m) + l_reverse_rotate(b, (n - m), 2));
}

int	movetop(t_stack **a, t_stack **b, int i_node, int i_target)
{
	int	median1;
	int	median2;

	median1 = ft_lst_size(*b) / 2;
	median2 = ft_lst_size(*a) / 2;
	if (i_node == 0)
		return (nodetop(a, i_target, median2, 1));
	if (i_target == 0)
		return (nodetop(b, i_node, median1, 2));
	if (i_node <= median1 && i_node == i_target)
		return (l_rr_rotate(b, a, i_node));
	if (i_node <= median1 && i_target <= median2 && i_node < i_target)
		return (l_rr_rotate(b, a, i_node) \
			+ l_rotate(a, (i_target - i_node), 1));
	if (i_node <= median1 && i_target <= median2 && i_node > i_target)
		return (l_rr_rotate(b, a, i_target) \
			+ l_rotate(b, (i_node - i_target), 2));
	if (i_node > median1 && i_target > median2)
		return (movetop1(a, b, i_node, i_target));
	return (nodetop(b, i_node, median1, 1) + nodetop(a, i_target, median2, 2));
}
