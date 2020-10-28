/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:54:59 by sh                #+#    #+#             */
/*   Updated: 2020/10/27 20:57:57 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		str_len(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[] = {"abc"};
	char b[] = {"abc"};

	char c[] = {"bbc"};
	char d[] = {"abc"};

	char e[] = {"abc"};
	char f[] = {"bbc"};

	char g[] = {"abcd"};
	char h[] = {"abc"};

	char i[] = {"ab"};
	char j[] = {"abc"};

	printf("%d should be %d\n", ft_strcmp(a, b), strcmp(a, b));
	printf("%d should be %d\n", ft_strcmp(c, d), strcmp(c, d));
	printf("%d should be %d\n", ft_strcmp(e, f), strcmp(e, f));
	printf("%d should be %d\n", ft_strcmp(g, h), strcmp(g, h));
	printf("%d should be %d\n", ft_strcmp(i, j), strcmp(i, j));
	return (0);
}
