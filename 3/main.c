/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:33:03 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 15:16:01 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 12;
	b = 10;
	printf("if we put %d & %d, ", a, b);
	ft_div_mod(a, b, div, mod);
	printf("the result should be %d & %d.", *div, *mod);
	return (0);
}
