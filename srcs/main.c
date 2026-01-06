/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/06 15:00:01 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size;
	t_node	*tmp;

	if (argc <= 1)
		return (ft_putstr_fd("Error\n", 2), 1);
	if (!is_valid_args(argc, argv))
		return (1);
	stack_a = init_stack_a(argc, argv);
	stack_b = NULL;
	if (is_sorted(&stack_a))
		return (free_stack(stack_a), 0);
	size = stack_size(stack_a);
	if (size == 3)
		sort_three(&stack_a);
	else if (size == 5)
		sort_five(&stack_a, &stack_b);
	tmp = stack_a;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(stack_a);
	return (0);
}
