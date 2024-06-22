/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:26:15 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/22 12:25:45 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lst_free(t_stack **lst)
{
	t_stack	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		(*lst)->content = 0;
		free(*lst);
		*lst = node;
	}
}
