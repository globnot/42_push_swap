/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:59:56 by aborda            #+#    #+#             */
/*   Updated: 2026/01/04 11:43:01 by aborda           ###   ########.fr       */
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

// STACK UTILS
t_node		*init_stack_a(int argc, char **argv);
void		free_stack(t_node *stack);

// OPERATIONS
void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);

// SORTING
void		sort_three(t_node **stack_a);

// SORTING UTILS
int			find_biggest_int(t_node **stack_a);

#endif
