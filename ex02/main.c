/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 03:28:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 17:09:44 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_len(char *str);
char *cat(char *dest, char *src, int dest_c, int src_c);
char *ft_strcat(char *dest, char *src);

int main(void)
{

	printf("%s", strcat("abc", "def"));
	return (0);
}
