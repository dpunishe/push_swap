/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:10:15 by dpunishe          #+#    #+#             */
/*   Updated: 2021/12/05 19:00:44 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

static int	init_stacks(int n, t_stack *stack_a, t_stack *stack_b)
{
	stack_a->size = n;
	stack_a->array = malloc(n * sizeof(int) + 1);
	if (!(stack_a->array))
		return (FALSE);
	stack_a->index = malloc(n * sizeof(int) + 1);
	if (!(stack_a->index))
	{
		free(stack_a->array);
		return (FALSE);
	}
	stack_b->size = 0;
	stack_b->index = malloc(n * sizeof(int) + 1);
	if (!(stack_b->index))
	{
		free(stack_a->array);
		free(stack_a->index);
		return (FALSE);
	}
	ft_bzero(stack_b->index, stack_a->size);
	return (TRUE);
}

static int	check_int(char **argv, int i, t_stack *stack_a)
{
	int		j;
	double	number;

	j = 0;
	if (argv[i][j] == '-')
	{
		j++;
		if (!argv[i][j])
			return (FALSE);
	}
	while (argv[i][j])
	{
		if (!(ft_isdigit(argv[i][j])))
		{
			write(1, "Error\n", 6);
			exit(FALSE);
		}
		j++;
	}
	number = ft_atod(argv[i]);
	if (number > INT_MAX || number < INT_MIN)
		return (FALSE);
	stack_a->array[i] = (int)number;
	return (TRUE);
}

static void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->array);
	free(stack_a->index);
	free(stack_b->index);
}

static void	check_args(int argc, char **argv,
	t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (check_int(argv, i, stack_a))
			i++;
		else
		{
			write(1, "Error\n", 6);
			free_stacks(stack_a, stack_b);
			exit(FALSE);
		}
	}
	if (!check_repeated(stack_a))
	{
		write(1, "Error\n", 6);
		free_stacks(stack_a, stack_b);
		exit(FALSE);
	}
	if (check_array_sorted(stack_a))
	{
		exit(FALSE);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	char	**lol;
	int		i;

	i = 0;
	lol = ft_calloc(501, sizeof(char *));
	if (argc == 1)
		exit(FALSE);
	else
		lol = check_input_validity(argc, argv);
	while (lol[i])
		i++;
	init_stacks(i, &stack_a, &stack_b);
	check_args(i, lol, &stack_a, &stack_b);
	sort_index(&stack_a);
	sort_stack(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return (0);
}
