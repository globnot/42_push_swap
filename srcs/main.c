/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 10:53:11 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	char	**args_array;
	t_node	*tmp;

	if (argc <= 1)
		return (1);
	if (!is_valid_args(argc, argv))
		return (1);
	args_array = create_args_array(argc, argv);
	if (args_array == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	stack_a = init_stack_a(args_array);
	if (stack_a == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		free(args_array);
		return (1);
	}
	if (is_double_args(stack_a))
	{
		ft_putstr_fd("Error\n", 2);
		free(args_array);
		free_stack(stack_a);
		return (1);
	}
	sort_three(&stack_a);
	tmp = stack_a;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	free(args_array);
	free_stack(stack_a);
	return (0);
}
