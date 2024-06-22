/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_ifsorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:36:34 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/03 12:38:55 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_ifsorted(t_stack **a)
{
	int		i;
	t_stack	*node;
	int		len;

	node = *a;
	i = 0;
	len = ft_lst_size(node);
	while (node->next != NULL)
	{
		if (node->content < node->next->content)
		{
			node = node->next;
			i++;
		}
		else
			break ;
	}
	if (i == len - 1)
		return (0);
	return (-1);
}
