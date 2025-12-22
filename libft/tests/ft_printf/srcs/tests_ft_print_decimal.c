/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_print_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:30 by aborda            #+#    #+#             */
/*   Updated: 2025/11/19 16:17:13 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void tests_ft_print_decimal(void)
{
	int exp = 0;
	int	act = 0;
	int test = 0;

	printf("\n====== START TEST %s ======\n", "TYPE d");

	test = 42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = -42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 10;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = INT_MAX;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = INT_MIN;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 0;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%d", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%d", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	printf("\n====== START TEST %s ======\n", "TYPE i");

	test = 42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = -42;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 10;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = INT_MAX;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = INT_MIN;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = 0;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%i", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%i", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");
}
