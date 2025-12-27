/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:07:05 by aborda            #+#    #+#             */
/*   Updated: 2025/12/27 19:36:10 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	node->value = number;
	node->next = NULL;
	return (node);
}

t_node	*init_stack_a(int argc, char **argv)
{
	int		i;
	t_node	*new;
	t_node	*head;
	t_node	*current;

	i = 1;
	new = NULL;
	head = NULL;
	current = NULL;
	while (i <= (argc - 1))
	{
		new = create_node (ft_atoi(argv[i]));
		if (head == NULL)
			head = new;
		else
		{
			current = head;
			while (current->next != NULL)
				current = current->next;
			current->next = new;
		}
		i++;
	}
	return (head);
}
