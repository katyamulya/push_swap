/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:31:04 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 16:22:01 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_rra_rrb(int fl)
{
	if (fl == 1)
		ft_putstr_fd("rra\n", 1);
	if (fl == 2)
		ft_putstr_fd("rrb\n", 1);
}

int	reverse_rotate(t_stack **lst, int fl)
{
	t_stack	*top_node;
	t_stack	*last_node;

	if (ft_lst_size(*lst) > 1)
	{
		top_node = *lst;
		last_node = ft_lst_last(top_node);
		while (top_node)
		{
			if (top_node->next->next == NULL)
			{
				top_node->next = NULL;
				break ;
			}
			top_node = top_node->next;
		}
		last_node->next = *lst;
		*lst = last_node;
		ft_lst_index(lst);
		print_rra_rrb(fl);
		return (1);
	}
	return (0);
}
