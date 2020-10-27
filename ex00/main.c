/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:07:32 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/26 18:39:34 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);
int		str_len(char *str);

#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "bcd"; 
	char src[] = "a"; 

	char dest2[] = "bcd";
	char src2[] = "aef";
	
	char dest3[] = "bcd";
	char src3[] = "aefpl";
	ft_strcpy(dest, src);
	printf("case1 : %s should be a\n", dest);
	ft_strcpy(dest2, src2);
	printf("case2 : %s should be aef\n", dest2);
	ft_strcpy(dest3, src3);
	printf("case3 : %s should be aef\n", dest3);
	return (0);
}
