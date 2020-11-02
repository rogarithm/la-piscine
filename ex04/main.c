/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:53:37 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/03 00:00:37 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putnbr_base(int nbr, char *base);
int	compare_elem(char *str);
int exceptions(char *base);
char *divide_again(int nbr, char *base, char *a);

int	main(void)
{
	int nbr = 123;
	char *base = "01";
	char pass[32];

	divide_again(nbr, base, pass);
	printf("\n");
	return (0);
}
