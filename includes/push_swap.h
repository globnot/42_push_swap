/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:59:56 by aborda            #+#    #+#             */
/*   Updated: 2025/12/27 19:34:44 by aborda           ###   ########.fr       */
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

// LINKED LIST
t_node		*create_node(int number);
t_node		*init_stack_a(int argc, char **argv);

#endif
