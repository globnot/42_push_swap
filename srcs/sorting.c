/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:13:56 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 11:28:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	int	biggest_int;

	biggest_int = find_biggest_int(stack_a);
	if ((*stack_a)->value == biggest_int)
		ra(stack_a);
	else if ((*stack_a)->next->value == biggest_int)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

// void	sort_five(t_node **stack_a)
// {
//
//
// }
