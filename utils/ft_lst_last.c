/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:26:31 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:46:19 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lst_last(t_stack *lst)
{
	t_stack	*ptr;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
