/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:52:18 by aborda            #+#    #+#             */
/*   Updated: 2026/01/01 15:31:34 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(int argc, char **argv)
{
	int		count_args;
	int		i;
	int		j;
	char	**split;

	count_args = 0;
	i = 1;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			j = 0;
			while (split[j])
			{
				j++;
				count_args++;
			}
			free_split(split);
		}
		else
			count_args++;
		i++;
	}
	return (count_args);
}

int	check_arg(char *argv)
{
	int	i;

	i = 0;
	while ((argv[i] >= 9 && argv[i] <= 13) || (argv[i] == 32))
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
			j = 0;
			while (split[j])
			{
				if (check_arg(split[j]) == 1)
					return (0);
				j++;
			}
			free_split(split);
		}
		else if (check_arg(argv[i]) == 1)
			return (0);
		i++;
	}
	return (1);
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
			fill_from_split(args_array, split, &j);
			free(split);
		}
		else if (check_arg(argv[i]) == 0)
			fill_from_argv(args_array, argv[i], &j);
		i++;
	}
	return (args_array[j] = NULL, args_array);
}

int	check_double(t_node *stack_a)
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
