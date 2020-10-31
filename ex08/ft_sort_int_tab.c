/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:36:13 by sh                #+#    #+#             */
/*   Updated: 2020/10/31 21:03:33 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int outer_index;
	int inner_index;
	int temp;

	outer_index = 0;
	while (outer_index < size - 1)
	{
		inner_index = 0;
		while (inner_index < size - outer_index - 1)
		{
			if (tab[inner_index] > tab[inner_index + 1])
			{
				temp = tab[inner_index];
				tab[inner_index] = tab[inner_index + 1];
				tab[inner_index + 1] = temp;	
			}
			inner_index++;
		}
		outer_index++;
	}
}
