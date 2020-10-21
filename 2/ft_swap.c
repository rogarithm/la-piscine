/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:28:22 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 08:11:16 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int i_have_a;
	int i_have_b;

	i_have_a = *a;
	i_have_b = *b;
	*b = i_have_a;
	*a = i_have_b;
}
