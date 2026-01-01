/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:59:56 by aborda            #+#    #+#             */
/*   Updated: 2026/01/01 16:06:23 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_node
{
	int					value;
	struct s_node		*next;
}	t_node;

// PARSING
int			check_arg(char *argv);
int			is_valid_args(int argc, char **argv);
char		**create_args_array(int argc, char **argv);
int			is_double_args(t_node *stack_a);

// PARSING UTILS
void		free_split(char **split);
void		fill_from_split(char **all_args, char **split, int *j);
void		fill_from_argv(char **all_argc, char *argv, int *j);

// LINKED LIST
t_node		*init_stack_a(char **args_array);

#endif
