/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:43:40 by sh                #+#    #+#             */
/*   Updated: 2020/10/26 22:29:25 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int str_len(char *str);

int	main(void)
{
	char dest[] = {"readon"};
	char src[] = {"abc"};
	
	char dest_[] = {"readon"};
	char src_[] = {"abc"};

	char dest2[6] = {"readon"};
	char src2[] = {"abc"};

	char dest2_[6] = {"readon"};
	char src2_[] = {"abc"};

	char dest3[6] = {"readon"};
	char src3[] = {"abc"};

	char dest3_[6] = {"readon"};
	char src3_[] = {"abc"};

	ft_strncpy(dest, src, 6); 
	ft_strncpy(dest2, src2, 6); 
	ft_strncpy(dest3, src3, 1); 
	printf("%s should be %s\n", dest, strncpy(dest_, src_, 6));
	printf("%s should be %s\n", dest2, strncpy(dest2_, src2_, 4));
	printf("%s should be %s\n", dest3, strncpy(dest3_, src3_, 1));
	return (0);
}
