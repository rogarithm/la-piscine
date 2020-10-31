/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:30:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/31 17:59:43 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_num(int a)
{
	int div;
	int mod;

	div = a / 10;
	mod = a % 10;
	if (div > 10)
	{
		write_num(div);
	}
	else
		write(1, &"0123456789"[div], 1);
	write(1, &"0123456789"[mod], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > 0)
	{
		write_num(nb);
	}
	else
	{
		write(1, "-", 1);
		write_num(-nb);
	}
}
