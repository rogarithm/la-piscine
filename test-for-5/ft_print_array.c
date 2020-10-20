/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:42:16 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/21 02:11:41 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(void)
{
	int	length;
	int	counter;
	char	*arr;

	arr = "0123";
	counter = 0;
	length = 4;
	while (counter < length)
	{
		if (counter < length - 1)
		{
			write(1, &arr[counter], 1);
			counter++;
			write(1, ", ", 2);
		}
		else if (counter == length - 1)
		{
			write(1, &arr[counter], 1);
			counter++;
		}
	}
}
