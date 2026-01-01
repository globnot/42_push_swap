/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/01 14:10:01 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	char	**args_array;

	if (argc <= 1)
	{
		return (ft_printf("Invalid arguments\n"), 1);
	}
	args_array = create_args_array(argc, argv);
	stack_a = init_stack_a(args_array);
	while (stack_a != NULL)
	{
		ft_printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}
