/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movetop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:50:42 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 16:42:53 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	loop_rotate(t_stack **lst, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rotate(lst);
		i--;
	}
	return (count);
}

int	loop_reverse_rotate(t_stack **lst, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += reverse_rotate(lst);
		i--;
	}
	return (count);
}

int	loop_rr_rotate(t_stack **a, t_stack **b, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rr_rotate(a, b);
		i--;
	}
	return (count);
}

int	loop_rr_reverse_rotate(t_stack **a, t_stack **b, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rr_reverse_rotate(a, b);
		i--;
	}
	return (count);
}

int	nodetop(t_stack **lst, int i, int median)
{
	if (i == 0)
		return (0);
	if (i == (ft_lst_size(*lst) - 1))
		return (reverse_rotate(lst));
	if (i <= median)
	{
		return (loop_rotate(lst, i));
	}
	else
	{
		i = ft_lst_size(*lst) - i;
		return (loop_reverse_rotate(lst, i));
	}
}

int	movetop(t_stack **a, t_stack **b, int i_node, int i_target)
{
	int	median1;
	int	median2;
	int	m;
	int	n;

	median1 = ft_lst_size(*a) / 2;
	median2 = ft_lst_size(*b) / 2;
	if (i_node == 0)
		return (nodetop(b, i_target, median2));
	if (i_target == 0)
		return (nodetop(a, i_node, median1));
	if (i_node <= median1 & i_node == i_target)
		return (loop_rr_rotate(a, b, i_node));
	if (i_node <= median1 & i_target <= median2 & i_node < i_target)
		return (loop_rr_rotate(a, b, i_node) \
			+ loop_rotate(b, (i_target - i_node)));
	if (i_node <= median1 & i_target <= median2 & i_node > i_target)
		return (loop_rr_rotate(a, b, i_target) + loop_rotate(a, (i_node - i_target)));
	if (i_node > median1 & i_target > median2)
	{
		n = ft_lst_size(*a) - i_node;
		m = ft_lst_size(*b) - i_target;
		if (n < m)
			return (loop_rr_reverse_rotate(a, b, m) + loop_reverse_rotate(b, (n - m)));
		else
			return (loop_rr_reverse_rotate(a, b, n) + loop_reverse_rotate(a, (m - n)));
	}
	return (nodetop(a, i_node, median1) + nodetop(b, i_target, median2));
}
