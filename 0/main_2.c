/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:00:53 by sh                #+#    #+#             */
/*   Updated: 2020/10/22 16:22:42 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strcpy_2(char *dest, char *src);

int		str_len(char *src);

int		main(void)
{
	char dest[] = "i am fifteenth"; //size is 15
	char src[] = "BlockDMask"; //size is 11

	ft_strcpy_2(dest, src);
	printf("case1 : %s\n", dest);
}
