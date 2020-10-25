/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:26:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 14:51:29 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr);

#include <stdio.h>

int	main(void)
{
	int val;
	int *mid_p1;
	int **mid_p2;
	int ***mid_p3;
	int ****mid_p4;
	int *****mid_p5;
	int ******mid_p6;
	int *******mid_p7;
	int ********mid_p8;
	int *********tip;

	val = 42;
	mid_p1 = &val;
	mid_p2 = &mid_p1;
	mid_p3 = &mid_p2;
	mid_p4 = &mid_p3;
	mid_p5 = &mid_p4;
	mid_p6 = &mid_p5;
	mid_p7 = &mid_p6;
	mid_p8 = &mid_p7;
	tip = &mid_p8;
	printf("%d\n", *********tip);
}
