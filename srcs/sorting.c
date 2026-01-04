/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:13:56 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 13:48:54 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack)
{
	int	biggest_int;

	biggest_int = find_biggest_int(stack);
	if ((*stack)->value == biggest_int)
		ra(stack);
	else if ((*stack)->next->value == biggest_int)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	// IL FAUT METTRE LES 3 PLUS GROS DANS B
	int	biggest_int;
	int	i;
	t_node	*tmp;

	i = 0;
	tmp = *stack_a;
	while (i < 3)
	{
		biggest_int = find_biggest_int(stack_a);
		*stack_a = tmp;
		while ((*stack_a)->value != biggest_int)
		{
			*stack_a = (*stack_a)->next;
		}
		pb(stack_a, stack_b);
		i++;
	}
	sort_three(stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
