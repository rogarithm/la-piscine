/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:03:20 by sh                #+#    #+#             */
/*   Updated: 2020/10/30 21:21:09 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** tab is a pointer, and size is a number of int inside an array
 ** what the pointer points? does size should always be equal to the array's size?
 */

void	ft_swap(int *a, int *b)
{
	int i_need_a;
	int i_need_b;

	i_need_a = *a;
	i_need_b = *b;
	*b = i_need_a;
	*a = i_need_b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int index;

	index = 0;
	while(index < (size + index + 1) / 2)
	{
		ft_swap(&tab[index], &tab[size]);
		index++;
		size--;
	}
}
