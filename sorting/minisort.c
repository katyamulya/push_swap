/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:11:02 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/01 15:36:05 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	minisort(t_stack **a)
{
	int		count;
	t_stack	*node;
	t_stack	*last;

	node = *a;
	count = 0;
	if (ft_lst_size(node) == 2)
	{
		if (node->content > node->next->content)
			return (swap(a));
		else
			return (0);
	}
	if (ft_lst_size(node) == 3)
	{
		last = ft_lst_last(node);
		if (node->content < node->next->content & node->content > last->content)
			count += reverse_rotate(a);
		else
		{
			if (node->content > last->content)
			{
				count += rotate(a);
				node = *a;
				last = ft_lst_last(node);
			}
			if (node->content > node->next->content)
			{
				count += swap(a);
				node = *a;
				last = ft_lst_last(node);
			}
			if (node->next->content > last->content)
				count += swap(a) + rotate(a);
		}
	}
	return (count);
}

