/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:28:16 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 16:21:43 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ss_swap(t_stack **a, t_stack **b)
{
	if (swap(a, 0) == 0 && swap(b, 0) == 0)
		return (0);
	else
	{
		ft_putstr_fd("ss\n", 1);
		return (1);
	}
}
