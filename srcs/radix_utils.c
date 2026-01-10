/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:26:30 by aborda            #+#    #+#             */
/*   Updated: 2026/01/10 08:44:37 by aborda           ###   ########.fr       */
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
			if (current->value > compare->next->value)
				count++;
			compare = compare->next;
		}
		current->index = count;
		current = current->next;
	}
}
