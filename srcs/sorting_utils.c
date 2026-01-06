/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:15:02 by aborda            #+#    #+#             */
/*   Updated: 2026/01/06 15:00:26 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest_int(t_node **stack_a)
{
	int		biggest_int;
	t_node	*current;

	biggest_int = INT_MIN;
	current = *stack_a;
	while (current != NULL)
	{
		if (current->value > biggest_int)
			biggest_int = current->value;
		current = current->next;
	}
	return (biggest_int);
}

int	find_smallest_int(t_node **stack_a)
{
	int		smallest_int;
	t_node	*current;

	smallest_int = INT_MAX;
	current = *stack_a;
	while (current != NULL)
	{
		if (current->value < smallest_int)
			smallest_int = current->value;
		current = current->next;
	}
	return (smallest_int);
}

int	is_sorted(t_node **stack)
{
	t_node	*current;

	current = *stack;
	while (current->next != NULL && current->value < current->next->value)
		current = current->next;
	if (current->next != NULL)
		return (0);
	return (1);
}
