/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_with_while.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 11:53:04 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/20 22:46:32 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int main()
{
	ft_print_alphabet();
	return 0;
}

/*
 * confused by char *c and c. in char *c, c represents pointer
 * but in c = "ab", it "seems like" c is not an address, since
 * ... is c points to the address that has the value "ab"?
 */

void ft_print_alphabet(void)
{
	char ltr;

	ltr = 97;
	while(ltr <= 'z'){
		write(1, &ltr, 1);
		ltr = ltr + 1;
		}
}
