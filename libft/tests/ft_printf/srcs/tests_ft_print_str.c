/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_print_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:30 by aborda            #+#    #+#             */
/*   Updated: 2025/11/20 12:52:03 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void tests_ft_print_str(void)
{
	int exp = 0;
	int	act = 0;
	char *test = NULL;

	printf("\n====== START TEST %s ======\n", "TYPE s");

	test = "Je suis un string";
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%s", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%s", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = "";
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%s", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%s", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = "Je suis une looooooooooooooooooooooooooooooooooooongue chaine";
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%s", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%s", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");

	test = NULL;
	printf("EXPECT: "); fflush(stdout);
	exp = printf("%s", test); fflush(stdout);
	printf("\nACTUAL: "); fflush(stdout);
	act = ft_printf("%s", test); fflush(stdout); printf(" | "); fflush(stdout);
	printf("RET: %d/%d %s\n", exp, act, (exp==act)?"✅":"❌");
	printf("----------\n");
}
