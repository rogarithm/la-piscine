/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:11:37 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:18:40 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char nums[] = {"12345"};
	char alpha[] = {"abcde"};
	char aA[] = {"aGcG"};
	char contains_num[] = {"abc2de"};
	char none_num[] = {"abcde/-+"};
	char empty[] = {""};
	
	printf("%d should be 1\n", ft_str_is_numeric(nums));
	printf("%d should be 0\n", ft_str_is_numeric(alpha));
	printf("%d should be 0\n", ft_str_is_numeric(aA));
	printf("%d should be 0\n", ft_str_is_numeric(contains_num));
	printf("%d should be 0\n", ft_str_is_numeric(none_num));
	printf("%d should be 1\n", ft_str_is_numeric(empty));

	return (0);
}
