/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_print_percent.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:30 by aborda            #+#    #+#             */
/*   Updated: 2025/11/18 17:27:36 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void tests_ft_print_percent(void)
{
	int exp = 0;
	int	act = 0;

	printf("\n====== START TEST %s ======\n", "TYPE %");

	printf("EXPECT: "); fflush(stdout);
	exp = printf("%%"); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%%"); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");
}
