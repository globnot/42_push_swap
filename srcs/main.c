/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2025/12/22 14:36:50 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	check_arg(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] != '+' && argv[i] != '-' && ft_isdigit(argv[i]) != 1)
	{
		ft_printf("Error: first char\n");
		return (1);
	}
	else
	{
		i++;
		while (argv[i])
		{
			if (ft_isdigit(argv[i]) == 1)
				i++;
			else
			{
				ft_printf("Error: following char\n");
				return (1);
			}
		}
	}
	return (0);
}

int	is_valid_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_arg(argv[i]) == 1)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_printf("Invalid arguments\n");
		return (1);
	}
	if (is_valid_args(argc, argv))
	{
		ft_printf("Super\n");
		return (0);
		//TODO
	}
	return (1);
}
