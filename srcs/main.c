/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 12:02:31 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*tmp;

	if (argc <= 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (!is_valid_args(argc, argv))
		return (1);
	stack_a = init_stack_a(argc, argv);
	sort_three(&stack_a);
	tmp = stack_a;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(stack_a);
	return (0);
}
