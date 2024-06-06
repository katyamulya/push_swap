/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_indexofmin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:45:13 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/03 17:46:21 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_indexofmin(t_stack **lst)
{
	int		indexmin;
	int		min;
	t_stack	*node;

	node = *lst;
	min = node->content;
	indexmin = node->index;
	while (node != NULL)
	{
		if (node->content < min)
		{
			min = node->content;
			indexmin = node->index;
		}
		node = node->next;
	}
	return (indexmin);
}
