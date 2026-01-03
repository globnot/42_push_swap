/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:36:15 by aborda            #+#    #+#             */
/*   Updated: 2026/01/03 13:33:07 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	int	tmp;

	if ((*stack == NULL) || ((*stack)->next == NULL))
		return ;
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;

}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
