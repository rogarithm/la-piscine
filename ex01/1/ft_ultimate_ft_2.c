/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:24:40 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/22 17:23:31 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** to declare **ptr, what I should do?
** **ptr is a value pointed by *ptr.
**
** If every middle value should be declared,
** should I declare the pointer nine times?
*/

void		ft_ultimate_ft_2(int **ptr)
{
	**ptr = 42;
}
