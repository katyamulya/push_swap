/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:30:20 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/20 16:21:46 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rr_rotate(t_stack **a, t_stack **b)
{
	if ((rotate(a, 0) == 0) & (rotate(b, 0) == 0))
		return (0);
	else
	{
		ft_putstr_fd("rr\n", 1);
		return (1);
	}
}
