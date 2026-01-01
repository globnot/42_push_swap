/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:52:18 by aborda            #+#    #+#             */
/*   Updated: 2026/01/01 13:57:40 by aborda           ###   ########.fr       */
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
		return (ft_printf("Error: 1\n"), 1);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (ft_printf("Error: 2\n"), 1);
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

char	**args_array(int argc, char **argv)
{
	char	**all_args;
	char	**split;
	int		args;
	int		i;
	int		j;

	args = count_args(argc, argv);
	all_args = malloc(sizeof(char *) * (args + 1));
	if (all_args == NULL)
		return (NULL);
	i = 1;
	j = 0;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			fill_from_split(all_args, split, &j);
			free(split);
		}
		else if (check_arg(argv[i]) == 0)
			fill_from_argv(all_args, argv[i], &j);
		i++;
	}
	return (all_args[j] = NULL, all_args);
}
