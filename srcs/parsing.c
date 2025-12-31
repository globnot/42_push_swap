/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:52:18 by aborda            #+#    #+#             */
/*   Updated: 2025/12/31 12:14:34 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

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
	int		count_args;
	int		i;
	int		j;
	int		k;

	count_args = count_args(argc, argv);
	all_args = malloc(sizeof(char*) * (count_args + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		if ((ft_strchr(argv[i], ' ')) != NULL)
		{
			split = ft_split(argv[i], ' ');
			j = 0;
			while (split[j])
			{
				if (check_arg(split[j]) == 0)
				{
					all_args[k] = split[j];
					k++;
				}
				j++;
			}
			free(split);
		}
		else if (check_arg(argv[i]) == 0)
		{
			all_args[k] = argv[i];
			k++;
		}
		i++;
	}
	all_args[k] == NULL;
	return (all_args);
}
