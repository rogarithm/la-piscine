/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:43:40 by sh                #+#    #+#             */
/*   Updated: 2020/10/25 22:10:13 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[6];
	char src[] = {"abc"};
	
	char dest2[6];
	char src2[] = {"abcdefgh"};

	ft_strncpy(dest, src, sizeof(dest));
	ft_strncpy(dest2, src2, sizeof(dest2));
	printf("%s should be abc\n", dest);
	printf("%s should be abcdef\n", dest2);
	return (0);
}
