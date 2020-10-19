/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 11:53:04 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/19 01:25:03 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** confused by char *c and c. in char *c, c represents pointer
** but in c = "ab", it "seems like" c is not an address, since
** ... is c points to the address that has the value "ab"?
*/

void	ft_print_alphabet(void)
{
	char *c;

	c = "abcdefghijklmnopqrstuvwxyz";
	write(1, c, 26);
}
