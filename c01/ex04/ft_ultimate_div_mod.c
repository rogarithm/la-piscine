/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:34:56 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/26 16:32:57 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;
	int temp_b;
	int mod;
	int remainder;

	temp_a = *a;
	temp_b = *b;
	mod = temp_a / temp_b;
	remainder = temp_a % temp_b;
	*a = mod;
	*b = remainder;
}
