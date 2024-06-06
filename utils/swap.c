/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:26:31 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 17:17:07 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack **lst)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp_content;
	//int		tmp_index;

	if (ft_lst_size(*lst) > 1)
	{
		first = *lst;
		second = first->next;
		tmp_content = first->content;
		first->content = second->content;
		second->content = tmp_content;
		//tmp_index = first->index;
		//first->index = second->index;
		//second->index = tmp_index;
		ft_lst_index(lst);
		return (1);
	}
	return (0);
}
