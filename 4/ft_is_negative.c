/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:45:22 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/20 18:07:41 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char positive;
	char negative;

	positive = 'P';
	negative = 'N';
	if ( write(1, &n, 1) < 0 )
		write(1, &negative, 1);
	else if ( (write(1, &n, 1) >= 0 ))
		write(1, &positive, 1);
}
