/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:26:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 18:23:33 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int val;
	int *mid_pt1;
	int **mid_pt2;
	int ***mid_pt3;
	int ****mid_pt4;
	int *****mid_pt5;
	int ******mid_pt6;
	int *******mid_pt7;
	int ********mid_pt8;
	int *********tip;
	
	mid_pt1 = &val;
	mid_pt2 = &mid_pt1;
	mid_pt3 = &mid_pt2;
	mid_pt4 = &mid_pt3;
	mid_pt5 = &mid_pt4;
	mid_pt6 = &mid_pt5;
	mid_pt7 = &mid_pt6;
	mid_pt8 = &mid_pt7;
	tip = &mid_pt8;
	ft_ultimate_ft(tip);
	printf("%d should be 42\n", *********tip);
}
