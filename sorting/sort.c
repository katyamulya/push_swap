/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:10:57 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/21 16:58:15 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	largesort(t_stack **a, t_stack **b)
{
	int	count;
	int	median;
	int	i_min;

	count = 0;
	count += lsortab(a, b);
	count += minisort(a);
	count += lsortba(a, b);
	median = ft_lst_size(*a) / 2;
	i_min = ft_lst_indexofmin(a);
	count += nodetop(a, ft_lst_indexofmin(a), median, 1);
	return (count);
}

int	sort(t_stack **a, t_stack **b)
{
	t_stack	*node;

	node = *a;
	if (ft_lst_size(node) < 2)
		return (0);
	else if (ft_lst_size(node) < 4)
		return (minisort(a));
	else
		return (largesort(a, b));
}
