/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:07:05 by aborda            #+#    #+#             */
/*   Updated: 2026/01/06 13:41:21 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*create_node(int number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = number;
	node->next = NULL;
	return (node);
}

static void	add_node(t_node **head, t_node *new)
{
	t_node	*current;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack != NULL)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

int	stack_size(int argc, char **argv)
{
	char	**args_array;
	int		i;

	args_array = create_args_array(argc, argv);
	i = 0;
	while (args_array[i] != 0)
		i++;
	return (i);
}

t_node	*init_stack_a(int argc, char **argv)
{
	int		i;
	t_node	*new;
	t_node	*head;
	char	**args_array;

	i = 0;
	new = NULL;
	head = NULL;
	args_array = create_args_array(argc, argv);
	while (args_array[i])
	{
		new = create_node(ft_atoi(args_array[i]));
		if (new == NULL)
			return (free_stack(head), NULL);
		add_node(&head, new);
		i++;
	}
	if (is_double_args(head))
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(head);
		return (NULL);
	}
	return (head);
}
