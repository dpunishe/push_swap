/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:09:54 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/01 15:09:55 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	extend_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->size + 1 > i)
	{
		stack->index[stack->size - i + 1] = stack->index[stack->size - i];
		i++;
	}
}

void	reduce_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		stack->index[i] = stack->index[i + 1];
		i++;
	}
}

void	sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 5)
		sort_small_stack(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
