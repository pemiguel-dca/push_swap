/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_normal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:11:19 by pemiguel          #+#    #+#             */
/*   Updated: 2023/01/10 21:53:36 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_stack(t_stack *stack)
{
	int				*c;
	unsigned int	i;

	i = 0;
	c = malloc(stack->size * sizeof(int));
	while (i != stack->size)
	{
		c[i] = stack->array[i];
		i++;
	}
	return (c);
}

void	proper_sort(int *tab, int size)
{
	int	x;
	int	y;
	int	swap;

	x = 1;
	while (x < size)
	{
		swap = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swap)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swap;
		x++;
	}
}
