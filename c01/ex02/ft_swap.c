/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:28:22 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/26 16:24:48 by sehukim          ###   ########.fr       */
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
