/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:31:23 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 17:50:48 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char nums[] = {"12345"};
	char Alpha[] = {"ABCDE"};
	char alpha[] = {"abcde"};
	char aA[] = {"aGcG"};
	char contains_num[] = {"ABC2DE"};
	char none_num[] = {"ABCDE/-+"};
	char empty[] = {""};
	
	printf("%d should be 0\n", ft_str_is_uppercase(nums));
	printf("%d should be 1\n", ft_str_is_uppercase(Alpha));
	printf("%d should be 0\n", ft_str_is_uppercase(alpha));
	printf("%d should be 0\n", ft_str_is_uppercase(aA));
	printf("%d should be 0\n", ft_str_is_uppercase(contains_num));
	printf("%d should be 0\n", ft_str_is_uppercase(none_num));
	printf("%d should be 1\n", ft_str_is_uppercase(empty));

	return (0);
}
