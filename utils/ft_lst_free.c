/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:26:15 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/23 19:28:41 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lst_free(t_stack **lst)
{
	t_stack	*node;
	t_stack	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		node = tmp->next;
		free(tmp);
		tmp = node;
	}
	*lst = NULL;
}
