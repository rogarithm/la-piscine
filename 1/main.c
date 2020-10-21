/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:26:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 07:47:47 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** b = &a;
** *b = a;
** **b = *a;
*/

#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int val;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	val = 42;
	ptr = &val;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	
	printf("%d\n", *********ptr9);
}
