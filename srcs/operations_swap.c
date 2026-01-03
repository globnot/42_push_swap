/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:36:15 by aborda            #+#    #+#             */
/*   Updated: 2026/01/03 13:15:38 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **stack_a)
{
	int	tmp;

	if ((*stack_a == NULL) || ((*stack_a)->next == NULL))
		return ;
	tmp = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = tmp;
	ft_printf("sa\n");
}

void	sb(t_node **stack_b)
{
	int	tmp;

	if ((*stack_b == NULL) || ((*stack_b)->next == NULL))
		return ;
	tmp = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = tmp;
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(&(*stack_a));
	sb(&(*stack_b));
}

