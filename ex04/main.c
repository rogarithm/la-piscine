/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:16:46 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:21:47 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char nums[] = {"12345"};
	char alpha[] = {"abcde"};
	char aA[] = {"aGcG"};
	char contains_num[] = {"abc2de"};
	char none_num[] = {"abcde/-+"};
	char empty[] = {""};
	
	printf("%d should be 0\n", ft_str_is_lowercase(nums));
	printf("%d should be 1\n", ft_str_is_lowercase(alpha));
	printf("%d should be 0\n", ft_str_is_lowercase(aA));
	printf("%d should be 0\n", ft_str_is_lowercase(contains_num));
	printf("%d should be 0\n", ft_str_is_lowercase(none_num));
	printf("%d should be 1\n", ft_str_is_lowercase(empty));

	return (0);
}
