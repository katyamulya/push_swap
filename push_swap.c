/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:45:03 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/23 20:02:44 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_errors(int argc, char **argv, char **s)
{
	int		check;

	check = 0;
	if (argc < 2)
		return (-1);
	if (argc == 2)
		check = ft_checkerr(s, 0);
	else
		check = ft_checkerr(argv, 1);
	if (check == -1)
	{
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}
	return (check);
}

void	initlist(char **s, int i, t_stack **a)
{
	t_stack	*node;
	int		count;

	count = 0;
	while (s[i] != NULL)
	{
		node = ft_lst_new(ft_atoi(s[i]));
		ft_lst_add_back(a, node);
		i++;
	}
	i = 0;
	count = ft_lst_size(*a);
	node = *a;
	while (i < count)
	{
		node->index = i;
		node = node->next;
		i++;
	}
}

void	free_s(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	else
	{
		while (s[i] != NULL)
		{
			free(s[i]);
			i++;
		}
		free(s);
		s = NULL;
	}
}

void	free_all(char **s, t_stack **a, t_stack **b)
{
	free_s(s);
	ft_lst_free(a);
	ft_lst_free(b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**s;
	int		count;

	s = NULL;
	count = 0;
	a = NULL;
	b = NULL;
	if (argc == 2)
		s = ft_split(argv[1], ' ');
	if (check_errors(argc, argv, s) == -1)
	{
		free_s(s);
		return (-1);
	}
	if (argc == 2)
		initlist(s, 0, &a);
	else
		initlist(argv, 1, &a);
	if (ft_lst_ifsorted(&a) == -1)
		count = sort(&a, &b);
	ft_lst_print(&a);
	free_all(s, &a, &b);
	return (0);
}
