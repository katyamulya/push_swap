/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodetop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:18:15 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/21 16:50:19 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	l_rotate(t_stack **lst, int i, int fl)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rotate(lst, fl);
		i--;
	}
	return (count);
}

int	l_reverse_rotate(t_stack **lst, int i, int fl)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += reverse_rotate(lst, fl);
		i--;
	}
	return (count);
}

int	l_rr_rotate(t_stack **a, t_stack **b, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rr_rotate(a, b);
		i--;
	}
	return (count);
}

int	l_rr_reverse_rotate(t_stack **a, t_stack **b, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		count += rr_reverse_rotate(a, b);
		i--;
	}
	return (count);
}

int	nodetop(t_stack **lst, int i, int median, int fl)
{
	if (i == 0)
		return (0);
	if (i == (ft_lst_size(*lst) - 1))
		return (reverse_rotate(lst, fl));
	if (i <= median)
		return (l_rotate(lst, i, fl));
	else
	{
		i = ft_lst_size(*lst) - i;
		return (l_reverse_rotate(lst, i, fl));
	}
}
