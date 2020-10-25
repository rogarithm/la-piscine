/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:43:40 by sh                #+#    #+#             */
/*   Updated: 2020/10/25 16:17:24 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char alpha[] = {"abcde"};
	char not_alpha[] = {"abc2de"};
	char none_alpha[] = {"24356"};
	char empty[] = {""};
	
	printf("%d should be 1\n", ft_str_is_alpha(alpha))
	printf("%d should be 0\n", ft_str_is_alpha(not_alpha))
	printf("%d should be 0\n", ft_str_is_alpha(non_alpha))
	printf("%d should be 0\n", ft_str_is_alpha(empty))

	printf("I am %s\n", dest);
	return (0);
}
