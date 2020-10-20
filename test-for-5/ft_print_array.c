/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:42:16 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/21 00:18:29 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(void)
{
	int	length;
	int	counter;
	char	arr[4];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	counter = 0;
	length = 4;
	while (counter < length)
	{
		if (counter < length)
		{
			write(1, arr[counter], 1);
			counter++;
			write(1, ", ", 2);
		}
		else if (counter == length)
		{
			write(1, arr[counter], 1);
			counter++;
		}
	}
}
