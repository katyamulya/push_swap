/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:31:27 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 16:21:50 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rr_reverse_rotate(t_stack **a, t_stack **b)
{
	if ((reverse_rotate(a, 0) == 0) & (reverse_rotate(b, 0) == 0))
		return (0);
	else
	{
		ft_putstr_fd("rrr\n", 1);
		return (1);
	}
}
