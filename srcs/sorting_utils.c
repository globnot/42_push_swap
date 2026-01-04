/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:15:02 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 11:00:56 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest_int(t_node **stack_a)
{
	int		biggest_int;
	t_node	*current;

	biggest_int = INT_MIN;
	current = *stack_a;
	while (current->next != NULL)
	{
		if (current->value > biggest_int)
			biggest_int = current->value;
		current = current->next;
	}
	if (current->value > biggest_int)
		biggest_int = current->value;
	return (biggest_int);
}
