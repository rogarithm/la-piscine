/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 03:28:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 03:54:18 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_len(char *str);
char *cat(char *dest, char *src, int dest_c, int src_c);
char *ft_strcat(char *dest, char *src);

int main(void)
{
	char d0[] = "";
	char d01[] = "";
	char d1[] = "iron";
	char d2[] = "iron";
	char s0[] = "left";
	char s01[] = "left";
	char s1[] = "man";
	char s2[] = "man";

	printf("%s should be %s", ft_strcat(d0, s0), strcat(d01, s01));
	printf("%s should be like %s", ft_strcat(d1, s1), strcat(d2, s2));
	return (0);
}
