/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:30:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/03 16:58:53 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int a)
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

void ft_putnbr(int nb);
int main(void)
{
    ft_putnbr(42);
	write(1, "\n", 1);
    ft_putnbr(2147483647);
	write(1, "\n", 1);
    ft_putnbr(-2147483648);
	write(1, "\n", 1);
    ft_putnbr(0);
	write(1, "\n", 1);
    ft_putnbr(-42);
	write(1, "\n", 1);
    ft_putnbr(1);
	write(1, "\n", 1);
    ft_putnbr(-1);
	write(1, "\n", 1);
    ft_putnbr(-1010);
	write(1, "\n", 1);
    ft_putnbr(1024);
	write(1, "\n", 1);
    return 0;
}
