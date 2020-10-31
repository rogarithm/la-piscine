/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:01:32 by sh                #+#    #+#             */
/*   Updated: 2020/10/31 20:08:43 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int mark[3] = {1, 2, 3};
	ft_rev_int_tab(mark, 3);
	printf("%d, %d, %d\n", mark[0], mark[1], mark[2]);
	int mark2[4] = {1, 2, 3, 4};
	ft_rev_int_tab(mark2, 4);
	printf("%d, %d, %d, %d", mark2[0], mark2[1], mark2[2], mark2[3]);
	return (0);
}
