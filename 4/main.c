/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:35:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 15:23:26 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	(ft_ultimate_div_mod(int *a, int *b));

int	main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 12;
	b = 10;
	ptr1 = &a;
	ptr2 = &b;
	printf("when we put %d and %d as input, ", a, b);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("we get result %d and %d as mod and remainder.", *ptr1, *ptr2);
	return (0);
}
