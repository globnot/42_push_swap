/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_print_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:30 by aborda            #+#    #+#             */
/*   Updated: 2025/11/20 11:43:49 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void tests_ft_print_char(void)
{
	int exp = 0;
	int	act = 0;
	char test = 0;

	printf("\n====== START TEST %s ======\n", "TYPE c");

	test = 'C';
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%c", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%c", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = '0';
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%c", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%c", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 0;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%c", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%c", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");
}
