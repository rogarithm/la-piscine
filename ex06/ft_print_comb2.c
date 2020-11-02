/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:17:02 by sh                #+#    #+#             */
/*   Updated: 2020/11/02 14:36:14 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int front;
	int rear;
	char a;
	char b;
	char c;
	char d;

	front = 0;
	rear = 0;
	a = front / 10 + '0';
	b = front % 10 + '0';
	c = rear / 10 + '0';
	d = rear % 10 + '0';

	while (front <= 98)
	{	
		while (rear <= 99)
		{
			while ((a <= c) && (b < d))
			{
				ft_putchar(a);
				ft_putchar(b);
				write(1, " ", 1);
				ft_putchar(c);
				ft_putchar(d);
				if (!((a = '0') && (b = '0') && (c = '0') && (d = '1')))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
			rear++;
		}
		front++;
	}
}
