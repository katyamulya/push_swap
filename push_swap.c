/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:45:03 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/04 11:26:18 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	find_content(t_stack **lst, int i)
{
	t_stack	*ptr;

	if (lst == NULL)
		return (0);
	ptr = *lst;
	while ((ptr->next != NULL) & (ptr->index != i))
	{
		ptr = ptr->next;
	}
	return (ptr->content);
}

int	change_pos(t_stack **a, t_stack **b, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i <= n)
	{
		count = count + push(a, b);
		i++;
	}
	count = count + swap(b);
	i = 0;
	while (i <= n)
	{
		count = count + push(b, a);
		i++;
	}
	return (count);
}

int	intertionsort(t_stack **a, t_stack **b) //K -> for more than 3 elements
{
	int		i;
	int		j;
	int		n;
	int		key;
	int		size;
	int		count;

	size = ft_lst_size(*a);
	i = 1;
	count = 0;
	while (i < size)
	{
		key = find_content(a, i);
		j = i - 1;
		n = i;
		while (j >= 0 & find_content(a, j) > key)
		{
			//a[j + 1] = a[j];
			count = count + change_pos(a, b, n);
			j = j - 1;
			n--;
			//lstprint(a);
		}
		//lstprint(a);
		//a[j + 1] = key;
		i++;
	}
	return (count);
}

int	quicksort(t_stack **a, t_stack **b)  //for more than 3 elements
{
	int		count;
	t_stack	*pivot;
	t_stack	*node;
	int		len;
	int		number;

	count = 0;
	pivot = ft_lst_last(*a);
	number = pivot->content;
	node = *a;
	len = ft_lst_size(node);
	while (len > 2)
	{
		if (node->content > number)
			count = count + push(a, b);
		else
			count = count + rotate(a);
		len--;
		node = *a;
	}
	return (count);
}

*/

void	initlist(char **s, int i, t_stack **a)
{
	t_stack	*node;
	int		count;

	while (s[i] != NULL)
	{
		node = ft_lst_new(ft_atoi(s[i]));
		ft_lst_add_back(a, node);
		i++;
	}
	i = 0;
	count = ft_lst_size(*a);
	//printf("count = %d\n", count);
	node = *a;
	while (i < count)
	{
		node->index = i;
		//printf("index: %d  content: %d\n", (node->index), (node->content));
		node = node->next;
		i++;
	}
}

int	main (int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;
	int		check;
	char	**s;
	int		count;

	if (argc < 2)
		return (-1);
	if (argc == 2)
	{
		s = ft_split(argv[1], ' ');
		check = ft_checkerr(s, 0);
	}
	else
		check = ft_checkerr(argv, 1);
	if (check == -1)
	{
		//free s !!!
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}
	a = malloc(sizeof(t_list *));
	b = malloc(sizeof(t_list *));
	if (argc == 2)
		initlist(s, 0, a);
	else
		initlist(argv, 1, a);
	//ft_lst_ifsorted(a);
	count = sort(a, b);
	ft_lst_print(a);
	ft_lst_print(b);
	printf ("count = %d\n", count);
	return (0);
}
