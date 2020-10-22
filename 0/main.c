/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:00:53 by sh                #+#    #+#             */
/*   Updated: 2020/10/22 14:17:36 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest1[20];
	char dest2[20];
	char *dest3;
	char *src;

	src = "BlockDMask";
	dest3 = "i am fifteenth";

	ft_strcpy(dest1, src);
	ft_strcpy(dest2, src);
	ft_strcpy(dest3, src);

	printf("case1 : %c\n", *dest1);
	printf("case3 : %c\n", *dest3);
}
	
