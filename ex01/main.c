/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 23:28:55 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/30 22:34:20 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	// case 1. s > n. swapping s1 and s2
	char l[] = {"nice day!"};
	char s[] = {"nice!"};
	printf("%d should be %d\n", ft_strncmp(l, s, 5), strncmp(l, s, 5));
	printf("%d should be %d\n", ft_strncmp(s, l, 5), strncmp(s, l, 5));
	printf("and above two should be equal.\n");

	// case 2. s = n. when the strings not match
	char l2[] = {"nice day!"};
	char s2[] = {"nice"};
	char dort2[] = {"dice"};
	printf("%d should be %d\n", ft_strncmp(l2, s2, 4), strncmp(l2, s2, 4));
	printf("%d should be %d\n", ft_strncmp(l2, dort2, 4), strncmp(l2, dort2, 4));
	printf("and above two should be not equal.\n");

	// case 3. s < n.
	char l3[] = {"goody day!"};
	char s3[] = {"goody"};
	char dort3[] = {"doody"};
	printf("%d should be %d\n", ft_strncmp(l3, s3, 5), strncmp(l3, s3, 5));
	printf("%d should be %d\n", ft_strncmp(l3, dort3, 5), strncmp(l3, dort3, 5));
	printf("and above two should be not equal.\n");

	return (0);
}
