/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:13:56 by aborda            #+#    #+#             */
/*   Updated: 2026/01/06 14:42:06 by aborda           ###   ########.fr       */
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
	int	smallest_int;

	smallest_int = find_smallest_int(stack_a);
	while ((*stack_a)->value != smallest_int)
		ra(stack_a);
	pb(stack_a, stack_b);
	smallest_int = find_smallest_int(stack_a);
	while ((*stack_a)->value != smallest_int)
		ra(stack_a);
	pb(stack_a, stack_b);
	if (!is_sorted(stack_a))
		sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
