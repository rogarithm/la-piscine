/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:30:08 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 15:01:46 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 3;
	d = 5;
	a = &c;
	b = &d;
	printf("when %d & %d get swaped, ", c, d);
	ft_swap(a, b);
	printf("the result should be %d & %d", *a, *b);
	return (0);
}
