/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:42 by aborda            #+#    #+#             */
/*   Updated: 2025/12/26 17:53:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	check_arg(char *argv)
{
	int	i;

	i = 0;
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
	int	i;

	if (argc <= 1)
	{
		return (ft_printf("Invalid arguments\n"), 1);
	}
	if (is_valid_args(argc, argv))
	{
		i = 1;
		while (i <= (argc - 1))
		{
			ft_lstnew (ft_atoi(argv[i]))
			ft_printf("%s\n", argv[i]);
			i++;
		}
		//TODO
	}
	return (1);
}

// FAIRE ATOI POUR TRANSFORMER EN NOMBRE
// GERER CA DANS UN TABLEAU
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
