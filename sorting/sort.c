/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:10:57 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 17:12:26 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



int	largesort(t_stack **a, t_stack **b)
{
	int	count;
	int	median;
	int	i_min;

	count = 0;
	if (ft_lst_size(*b) < 3 & ft_lst_size(*a) == 4)
		count += push(a, b);
	else if (ft_lst_size(*b) < 3 & ft_lst_size(*a) > 4)
	{
		count += push(a, b);
		count += push(a, b);
	}
	count += lsortab(a, b);
	count += minisort(a);
	count += lsortba(a, b);
	median = ft_lst_size(*a) / 2;
	i_min = ft_lst_indexofmin(a);
	count += nodetop(a, ft_lst_indexofmin(a), median);
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
