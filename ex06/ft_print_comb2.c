/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:17:02 by sh                #+#    #+#             */
/*   Updated: 2020/11/02 20:49:19 by sehukim          ###   ########.fr       */
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

	front = 0;
	while (front <= 98)
	{
		rear = front + 1;
		while (rear <= 99)
		{
			ft_putchar((front / 10) + '0');
			ft_putchar((front % 10) + '0');
			write(1, " ", 1);
			ft_putchar((rear / 10) + '0');
			ft_putchar((rear % 10) + '0');
			if (!((front == 98) && (rear == 99)))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			rear++;
		}
		front++;
	}
}
