/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:35:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/23 22:27:31 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int *p1;
	int *p2;
	int v_of_1;
	int v_of_2;

	v_of_1 = 12;
	v_of_2 = 10;
	p1 = &v_of_1;
	p2 = &v_of_2;
	printf("When we put arguments %d & %d, then ", v_of_1, v_of_2);
	ft_ultimate_div_mod(p1, p2);
	printf("the result should be %d & %d. second is remainder.\n", *p1, *p2);
	return (0);
}
