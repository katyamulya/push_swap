/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:34:34 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:08:18 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lst_index(t_stack **lst)
{
	t_stack	*ptr;
	int		i;

	if (lst == NULL)
		return ;
	ptr = *lst;
	i = 0;
	while (ptr->next != NULL)
	{
		ptr->index = i;
		i++;
		ptr = ptr->next;
	}
	ptr->index = i;
}
