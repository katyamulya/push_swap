/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:52:33 by kdvarako          #+#    #+#             */
/*   Updated: 2024/05/30 16:53:55 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lst_new(int content)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (a == NULL)
		return (NULL);
	a->content = content;
	a->next = NULL;
	return (a);
}
