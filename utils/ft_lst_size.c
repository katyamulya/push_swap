/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:17:44 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:48:35 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_size(t_stack *lst)
{
	int		count;
	t_stack	*ptr;

	if (lst == NULL)
		return (0);
	ptr = lst;
	count = 1;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
