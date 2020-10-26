/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:26:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 17:26:56 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<stdio.h>

void	ft_ultimate_ft_2(int **nbr);

int		main(void)
{
	int val;
	int *mid_pt;
	int **tip;
	
	mid_pt = &val;
	tip = &mid_pt;
	ft_ultimate_ft_2(tip);
	printf("%d should be 42\n", **tip);
}
