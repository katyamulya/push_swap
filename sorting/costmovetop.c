/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costmovetop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:34:37 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/22 14:39:04 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	costnodetop(t_stack **lst, int i, int median)
{
	if (i == 0)
		return (0);
	if (i == (ft_lst_size(*lst) - 1))
		return (1);
	if (i <= median)
		return (i);
	else
		return (ft_lst_size(*lst) - i);
}

int	costmovetop(t_stack **lst1, t_stack **lst2, int i_node, int i_target)
{
	int	median1;
	int	median2;

	median1 = ft_lst_size(*lst1) / 2;
	median2 = ft_lst_size(*lst2) / 2;
	if (i_node == 0)
		return (costnodetop(lst2, i_target, median2));
	if (i_target == 0)
		return (costnodetop(lst1, i_node, median1));
	if (i_node <= median1 && i_node == i_target)
		return (i_node);
	if (i_node <= median1 && i_target <= median2 && i_node < i_target)
		return (i_target);
	if (i_node <= median1 && i_target <= median2 && i_node > i_target)
		return (i_node);
	if (i_node > median1 && i_target > median2)
	{
		if ((ft_lst_size(*lst1) - i_node) < (ft_lst_size(*lst2) - i_target))
			return (ft_lst_size(*lst2) - i_target);
		else
			return (ft_lst_size(*lst1) - i_node);
	}
	return (costnodetop(lst1, i_node, median1) \
		+ costnodetop(lst2, i_target, median2));
}
