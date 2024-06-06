/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:44:37 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/06 16:23:05 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct a_list
{
	int				content;
	int				index;
	struct a_list	*next;
}					t_stack;

//utils:
int		swap(t_stack **lst);
int		ss_swap(t_stack **a, t_stack **b);
int		push(t_stack **lst1, t_stack **lst2);
int		rotate(t_stack **lst);
int		rr_rotate(t_stack **a, t_stack **b);
int		reverse_rotate(t_stack **lst);
int		rr_reverse_rotate(t_stack **a, t_stack **b);
void	ft_lst_add_back(t_stack **lst, t_stack *new);
void	ft_lst_add_front(t_stack **lst, t_stack *new);
t_stack	*ft_lst_last(t_stack *lst);
t_stack	*ft_lst_new(int content);
int		ft_lst_size(t_stack *lst);
void	ft_lst_index(t_stack **lst);
void	ft_lst_print(t_stack **lst);
int		ft_lst_ifsorted(t_stack **a);
int		ft_checkerr(char **s, int fl);
int		ft_lst_indexofmax(t_stack **lst);
int		ft_lst_indexofmin(t_stack **lst);
//sorting:
int		sort(t_stack **a, t_stack **b);
int		minisort(t_stack **a);
int		find_smalltarget(t_stack **lst, int cnode);
int		find_bigtarget(t_stack **lst, int cnode);
int		costmovetop(t_stack **lst1, t_stack **lst2, int i_node, int i_target);
int		movetop(t_stack **lst1, t_stack **lst2, int i_node, int i_target);
int		lsortab(t_stack **a, t_stack **b);
int		lsortba(t_stack **a, t_stack **b);
int		nodetop(t_stack **lst, int i, int median);

#endif