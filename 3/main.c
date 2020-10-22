/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:33:03 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 09:05:30 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int *div;
	int *mod;
	int a;
	int b;

	a = 12;
	b = 10;
	div = &a;
	mod = &b;
	ft_div_mod(12, 10, &a, &b);
	printf("%d %d should be 1 2\n", *div, *mod);
	return (0);
}
