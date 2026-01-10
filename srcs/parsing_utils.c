/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 12:52:50 by aborda            #+#    #+#             */
/*   Updated: 2026/01/10 10:41:36 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	fill_from_split(char **all_args, char **split, int *j)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (check_arg(split[i]) == 0)
		{
			all_args[*j] = split[i];
			(*j)++;
		}
		i++;
	}
}

void	fill_from_argv(char **all_args, char *argv, int *j)
{
	all_args[*j] = ft_strdup(argv);
	(*j)++;
}
