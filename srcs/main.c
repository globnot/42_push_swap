/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2025/12/27 19:29:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	if (argc <= 1)
	{
		return (ft_printf("Invalid arguments\n"), 1);
	}
	if (is_valid_args(argc, argv))
	{
		stack_a = init_stack_a(argc, argv);
		while (stack_a != NULL)
		{
			ft_printf("%d\n", stack_a->value);
			stack_a = stack_a->next;
		}
	}
	return (0);
}

// CHECKER LES DOUBLON DE CE TABLEAU

// int	check_double(char *argv)
// {
// 	int	i;
// 	int	j;
//
// 	i = 0;
// 	while (argv[i])
// 	{
// 		j = i + 1;
// 		while (argv[j])
// 		{
// 			if (argv[i] == argv[j])
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }
