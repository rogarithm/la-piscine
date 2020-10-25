/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:43:40 by sh                #+#    #+#             */
/*   Updated: 2020/10/25 22:16:42 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char alpha[] = {"abcde"};
	char Alpha[] = {"ABCDE"};
	char aA[] = {"aGcG"};
	char contains_num[] = {"abc2de"};
	char none_alpha[] = {"24356/-+"};
	char empty[] = {""};
	
	printf("%d should be 1\n", ft_str_is_alpha(alpha));
	printf("%d should be 1\n", ft_str_is_alpha(Alpha));
	printf("%d should be 1\n", ft_str_is_alpha(aA));
	printf("%d should be 0\n", ft_str_is_alpha(contains_num));
	printf("%d should be 0\n", ft_str_is_alpha(none_alpha));
	printf("%d should be 1\n", ft_str_is_alpha(empty));

	return (0);
}
