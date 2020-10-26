/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:30:08 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 18:42:45 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	ptr1 = &a;
	ptr2 = &b;
	a = 3;
	b = 5;
	printf("%d & %d", *ptr1, *ptr2);
	ft_swap(ptr1, ptr2);
	printf("should be swapped to %d & %d\n", *ptr1, *ptr2);
	return (0);
}
