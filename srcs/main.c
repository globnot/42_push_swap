/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2025/12/22 14:15:54 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	check_args(char *argv)
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

int	main(int argc, char **argv)
{
	int	i;
	int	result;

	if (argc <= 1)
		{
			ft_printf("Invalid arguments\n");
			return (1);
		}
	i = 1;
	while (i < argc)
	{
		result = check_args(argv[i]);
		if (result == 1)
		{
			ft_printf("Error");
			return (1);
		}
		i++;
	}
	return (0);
}
