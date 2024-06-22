/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:29:25 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/21 17:29:04 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_pa_pb(int fl)
{
	if (fl == 1)
		ft_putstr_fd("pb\n", 1);
	if (fl == 2)
		ft_putstr_fd("pa\n", 1);
}

int	push(t_stack **lst1, t_stack **lst2, int fl)
{
	t_stack	*node;
	t_stack	*s_node;

	if (ft_lst_size(*lst1) > 0)
	{
		if (ft_lst_size(*lst1) == 1)
		{
			node = *lst1;
			ft_lst_add_front(lst2, node);
			*lst1 = NULL;
		}
		else
		{
			node = *lst1;
			s_node = node->next;
			*lst1 = s_node;
			ft_lst_add_front(lst2, node);
			ft_lst_index(lst1);
		}
		ft_lst_index(lst2);
		print_pa_pb(fl);
		return (1);
	}
	return (0);
}
