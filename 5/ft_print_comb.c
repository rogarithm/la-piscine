/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:22:18 by sh                #+#    #+#             */
/*   Updated: 2020/10/20 18:56:35 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_print_comb(void)
{
	char a[3];
	char counter;
	int array_length;

	a = { counter, counter + 1, counter + 2 };
	counter = 'a' - 97;
	array_length = 3;
	while ( counter < array_length )
	{
		write(1, a[counter], 1);
		counter++;
	}
}
