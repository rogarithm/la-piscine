/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:32:05 by sh                #+#    #+#             */
/*   Updated: 2020/10/30 00:30:11 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb == minus_max_value)
		print_that_value_exactly;
	else if (nb < 0)
	{
		nb = -nb;
	}
	while(div < 10)
	{
		div = nb / 10;
		mod = nb % 10;
		if (div > 10)
		{	
		divide again;
		}
		insert_mod_to_arr;
		arr[counter] = mod;
		counter++;
	}
	reverse_the_arrary;
}

int *number_into_elems(int nb)
{
int div;
int mod;

div = nb / 10;
mod = nb % 10;
while (div > 10)

