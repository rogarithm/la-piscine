/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:01:32 by sh                #+#    #+#             */
/*   Updated: 2020/10/31 23:24:04 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int mark[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(mark, 5);
	printf("%d, %d, %d, %d, %d\n", mark[0], mark[1], mark[2], mark[3], mark[4]);
	int mark2[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(mark2, 6);
	printf("%d, %d, %d, %d, %d, %d", mark2[0], mark2[1], mark2[2], mark2[3], mark2[4], mark2[5]);
	return (0);
}
