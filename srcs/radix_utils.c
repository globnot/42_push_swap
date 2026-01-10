/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:26:30 by aborda            #+#    #+#             */
/*   Updated: 2026/01/10 10:19:56 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_node *stack)
{
	t_node	*current;
	t_node	*compare;
	int		count;

	current = stack;
	while (current != NULL)
	{
		count = 0;
		compare = stack;
		while (compare != NULL)
		{
			if (current->value < compare->value)
				count++;
			compare = compare->next;
		}
		current->index = count;
		current = current->next;
	}
}

int	get_max_bits(t_node *stack)
{
	int	biggest_index;
	int	max_bits;

	biggest_index = (stack_size(stack)) - 1;
	max_bits = 0;
	while (biggest_index > 0)
	{
		biggest_index = biggest_index / 2;
		max_bits++;
	}
	return (max_bits);
}
