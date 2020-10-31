/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:03:20 by sh                #+#    #+#             */
/*   Updated: 2020/10/31 21:06:26 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tab is a pointer, and size is a number of int inside an array
** what the pointer points? does size should always be equal
** to the array's size?
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int temp;

	index = 0;
	while (index < (size - index) / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = temp;
		index++;
	}
}
