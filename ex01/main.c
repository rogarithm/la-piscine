/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:43:40 by sh                #+#    #+#             */
/*   Updated: 2020/10/28 15:17:46 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int str_len(char *str);

int	main(void)
{
	char dest[] = {"readon"};
	char src[] = {"ab"};
	
	char dest_[] = {"readon"};
	char src_[] = {"ab"};

	char dest2[] = {"readon"};
	char src2[] = {"ab"};

	char dest2_[] = {"readon"};
	char src2_[] = {"ab"};

	char dest3[] = {"readon"};
	char src3[] = {"ab"};

	char dest3_[] = {"readon"};
	char src3_[] = {"ab"};

	ft_strncpy(dest, src, 1); 
	ft_strncpy(dest2, src2, 2); 
	ft_strncpy(dest3, src3, 3); 
	printf("%s should be %s\n", dest, strncpy(dest_, src_, 1));
	printf("%s should be %s\n", dest2, strncpy(dest2_, src2_, 2));
	printf("%s should be %s\n", dest3, strncpy(dest3_, src3_, 3));
	return (0);
}
