/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_print_hexaupper.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:30 by aborda            #+#    #+#             */
/*   Updated: 2025/11/19 13:38:54 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void tests_ft_print_hexaupper(void)
{
	int exp = 0;
	int	act = 0;
	unsigned int test = 0;

	printf("\n====== START TEST %s ======\n", "TYPE X");

	test = 42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%X", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%X", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = -42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%X", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%X", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 123455;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%X", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%X", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = UINT_MAX;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%X", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%X", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 0;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%X", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%X", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");
}
