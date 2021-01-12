/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:07:32 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 18:45:01 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);
int		str_len(char *str);

#include	<stdio.h>
#include	<string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "bcd"; 
	char src[] = "a"; 
	char dest_[] = "bcd"; 
	char src_[] = "a"; 

	char dest2[] = "bcd";
	char src2[] = "aef";
	char dest2_[] = "bcd";
	char src2_[] = "aef";
	
	//char dest3[] = "bcd";
	//char src3[] = "aefpl";
	char dest3_[] = "bcd";
	char src3_[] = "aefpl";
	ft_strcpy(dest, src);
	printf("case1 : %s should be %s\n", dest, strcpy(dest_, src_));
	ft_strcpy(dest2, src2);
	printf("case2 : %s should be %s\n", dest2, strcpy(dest2_, src2_));
	//ft_strcpy(dest3, src3);
	printf("case3 : %s should be %s\n", "dest3", strcpy(dest3_, src3_));
	return (0);
}
