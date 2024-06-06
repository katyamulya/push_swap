/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smalltarget.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:59:27 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/03 18:26:22 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_smalltarget(t_stack **lst, int cnode)
{
	int		tindex;
	t_stack	*node;
	int		min;

	node = *lst;
	min = cnode;
	while (node != NULL)
	{
		if (min == cnode & node->content < cnode)
		{
			min = node->content;
			tindex = node->index;
		}
		if (min != cnode & node->content > min & node->content < cnode)
		{
			min = node->content;
			tindex = node->index;
		}
		node = node->next;
	}
	if (min == cnode)
		return (ft_lst_indexofmax(lst));
	else
		return (tindex);
}
