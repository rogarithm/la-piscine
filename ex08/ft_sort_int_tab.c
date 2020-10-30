/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:36:13 by sh                #+#    #+#             */
/*   Updated: 2020/10/30 21:51:58 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int i_need_a;
	int i_need_b;

	i_need_a = *a;
	i_need_b = *b;
	*b = i_need_a;
	*a = i_need_b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int outer_index;
	int inner_index;

	outer_index = 0;
	inner_index = 0;
	while (outer_index < size)
	{
		while (inner_index < size - 1)
		{
			if (tab[inner_index] > tab[inner_index + 1])
			{
				ft_swap(&tab[inner_index], &tab[inner_index + 1]);
				inner_index++;
			}
		}
		outer_index++;
	}
}
