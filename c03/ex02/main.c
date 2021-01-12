/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 03:28:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 20:38:06 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char* dest, char *src);

int main(void)
{
	char dest[40] = "I love ";
	char src[] = "your way of smile.";
	
	char dests[40] = "I love ";
	char srcs[] = "your way of smile.";
	ft_strcat(dest, src);
	printf("%s\n %s", dest, strcat(dests, srcs));
	return (0);
}
