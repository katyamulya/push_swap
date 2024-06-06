/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:56:48 by kdvarako          #+#    #+#             */
/*   Updated: 2024/06/03 12:48:39 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_ifnum(char **s, int i)
{
	unsigned int	j;

	while (s[i] != NULL)
	{
		j = 0;
		while (j < ft_strlen(s[i]))
		{
			if (j == 0 && (s[i][0] == '-' || s[i][0] == '+'))
			{
				j++;
				if (j == ft_strlen(s[i]))
					return (-1);
			}
			else
			{
				if ((s[i][j] >= '0' && s[i][j] <= '9'))
					j++;
				else
					break ;
			}
		}
		if (j != ft_strlen(s[i]))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_ifdup_ifint(char **s, int i)
{
	int	num;
	int	j;

	while (s[i] != NULL)
	{
		num = ft_atoi(s[i]);
		if (ft_strlen(s[i]) > 9 & num == 0)
			return (-1);
		j = i + 1;
		while (s[j] != NULL)
		{
			if (num == ft_atoi(s[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checkerr(char **s, int fl)
{
	int	checkerr;

	checkerr = check_ifnum(s, fl);
	if (checkerr == -1)
		return (-1);
	checkerr = ft_ifdup_ifint(s, fl);
	if (checkerr == -1)
		return (-1);
	return (0);
}