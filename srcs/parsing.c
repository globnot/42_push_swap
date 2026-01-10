/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:52:18 by aborda            #+#    #+#             */
/*   Updated: 2026/01/10 14:33:40 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(int argc, char **argv)
{
	int		i;
	int		count;
	char	**split;

	i = 1;
	count = 0;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			if (split == NULL)
				return (0);
			count = count + split_len(split);
			free_split(split);
		}
		else
			count++;
		i++;
	}
	return (count);
}

int	check_arg(char *argv)
{
	int	i;

	i = 0;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	if (!ft_isdigit(argv[i]))
		return (ft_putstr_fd("Error\n", 2), 1);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (ft_putstr_fd("Error\n", 2), 1);
		i++;
	}
	if (!ft_is_valid_int(argv))
		return (ft_putstr_fd("Error\n", 2), 1);
	return (0);
}

int	is_valid_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			if (split == NULL)
				return (free(split), 0);
			j = 0;
			while (split[j] && check_arg(argv[i]) == 0)
				j++;
			if (split[j])
				return (free_split(split), 0);
			free_split(split);
		}
		else if (check_arg(argv[i]) == 1)
			return (0);
		i++;
	}
	return (1);
}

int	is_double_args(t_node *stack_a)
{
	t_node	*i;
	t_node	*j;

	i = stack_a;
	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->value == j->value)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

char	**create_args_array(int argc, char **argv)
{
	char	**args_array;
	char	**split;
	int		args;
	int		i;
	int		j;

	args = count_args(argc, argv);
	args_array = malloc(sizeof(char *) * (args + 1));
	if (args_array == NULL)
		return (NULL);
	i = 1;
	j = 0;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			if (split == NULL)
				return (free_split(args_array), NULL);
			fill_from_split(args_array, split, &j);
			free(split);
		}
		else if (check_arg(argv[i]) == 0)
			fill_from_argv(args_array, argv[i], &j);
		i++;
	}
	return (args_array[j] = NULL, args_array);
}
