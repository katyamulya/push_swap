/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsortab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:06:19 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 14:53:43 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lsortab(t_stack **a, t_stack **b)
{
	int		count;

	count = 0;
	while (ft_lst_size(*a) > 3)
	{
		count += push(a, b, 1);
	}
	return (count);
}
