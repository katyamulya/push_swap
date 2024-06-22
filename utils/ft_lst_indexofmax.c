/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_indexofmax.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:39:16 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/03 17:46:27 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_indexofmax(t_stack **lst)
{
	int		indexmax;
	int		max;
	t_stack	*node;

	node = *lst;
	max = node->content;
	indexmax = node->index;
	while (node != NULL)
	{
		if (node->content > max)
		{
			max = node->content;
			indexmax = node->index;
		}
		node = node->next;
	}
	return (indexmax);
}
