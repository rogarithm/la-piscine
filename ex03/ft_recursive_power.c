/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:54:30 by sh                #+#    #+#             */
/*   Updated: 2020/11/03 21:39:07 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (1);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int main(void)
{
	for (int i = -5; i < 30; i++)
		printf("%d %d %d %d %d %d %d\n",
			ft_recursive_power(0, i),
			ft_recursive_power(1, i),
			ft_recursive_power(2, i),
			ft_recursive_power(3, i),
			ft_recursive_power(4, i),
			ft_recursive_power(5, i),
			ft_recursive_power(10, i));
	return 0;
}
