/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:36:34 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 17:11:35 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lst_print(t_stack **lst)
{
	t_stack	*node;
	int		i;
	int		count;

	i = 0;
	count = ft_lst_size(*lst);
	//printf("count = %d\n", count);
	node = *lst;
	while (i < count)
	{
		//printf("index: %d  content: %d\n", (node->index), (node->content));
		ft_putnbr_fd((node->content), 1);
		write(1, " ", 1);
		node = node->next;
		i++;
	}
	write(1, "\n", 1);
}
