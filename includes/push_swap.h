/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:59:56 by aborda            #+#    #+#             */
/*   Updated: 2025/12/26 16:46:03 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_stack_a
{
	int			*number;
	s_stack_a	*next;
}	t_stack_a;

typedef struct s_stack_b
{
	int			*number;
	s_stack_b	*next;
}	t_stack_b;

#endif
