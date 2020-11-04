/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:52:00 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/04 16:07:00 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double a;
	double b;

	a = 1;
	while (a <= (nb / a))
	{
		b = nb / a;
		if (b == a)
			return (b);
		a++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1 && nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
