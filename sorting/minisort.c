/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:11:02 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/22 14:39:19 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	msortthree(t_stack **a)
{
	int		count;
	t_stack	*node;
	t_stack	*last;

	node = *a;
	count = 0;
	last = ft_lst_last(node);
	if (node->content > last->content)
	{
		count += rotate(a, 1);
		node = *a;
		last = ft_lst_last(node);
	}
	if (node->content > node->next->content)
	{
		count += swap(a, 1);
		node = *a;
		last = ft_lst_last(node);
	}
	if (node->next->content > last->content)
		count += swap(a, 1) + rotate(a, 1);
	return (count);
}

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
			return (swap(a, 1));
		else
			return (0);
	}
	if (ft_lst_size(node) == 3)
	{
		last = ft_lst_last(node);
		if (node->content < node->next->content \
			&& node->content > last->content)
			count += reverse_rotate(a, 1);
		else
		{
			count += msortthree(a);
		}
	}
	return (count);
}
