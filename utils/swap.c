/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:26:31 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 16:21:39 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack **lst, int fl)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp_content;

	if (ft_lst_size(*lst) > 1)
	{
		first = *lst;
		second = first->next;
		tmp_content = first->content;
		first->content = second->content;
		second->content = tmp_content;
		ft_lst_index(lst);
		if (fl == 1)
			ft_putstr_fd("sa\n", 1);
		if (fl == 2)
			ft_putstr_fd("sb\n", 1);
		return (1);
	}
	return (0);
}
