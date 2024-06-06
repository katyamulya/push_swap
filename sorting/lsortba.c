/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsortba.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:07:26 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 17:12:06 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lsortba(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*node;
	int		i_node;
	int		i_target;
	int		median;

	count = 0;
	while (ft_lst_size(*b) > 0)
	{
		node = *b;
		i_node = node->index;
		i_target = find_bigtarget(a, node->content);
		median = ft_lst_size(*a) / 2;
		count = nodetop(a, i_target, median);
		count += push(b, a);
	}
	return (count);
}
