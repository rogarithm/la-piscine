/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:33:03 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/26 16:26:25 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int *div;
	int *mod;
	int a;
	int b;

	a = 12;
	b = 10;
	div = &a;
	mod = &b;
	printf("when a is %d, and b is %d, the result ", a, b);
	ft_div_mod(12, 10, &a, &b);
	printf("should be %d & %d\n", *div, *mod);
	return (0);
}
