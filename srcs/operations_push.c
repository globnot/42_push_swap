/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:35:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/03 14:45:02 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_node **stack_src, t_node **stack_dest)
{
	t_node	*tmp;

	if (*stack_src == NULL)
		return ;
	tmp = *stack_src;
	*stack_src = tmp->next;
	tmp->next = *stack_dest;
	*stack_dest = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
