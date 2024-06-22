/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bigtarget.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:13:08 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 17:12:50 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_bigtarget(t_stack **lst, int cnode)
{
	int		tindex;
	t_stack	*node;
	int		max;

	node = *lst;
	max = cnode;
	while (node != NULL)
	{
		if (max == cnode && node->content > cnode)
		{
			max = node->content;
			tindex = node->index;
		}
		if (max != cnode && node->content < max && node->content > cnode)
		{
			max = node->content;
			tindex = node->index;
		}
		node = node->next;
	}
	if (max == cnode)
		return (ft_lst_indexofmin(lst));
	else
		return (tindex);
}
