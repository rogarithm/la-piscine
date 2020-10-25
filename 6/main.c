/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:56:37 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 18:15:00 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char nums[] = {"12345"};
	char Alpha[] = {"ABCDE"};
	char alpha[] = {"abcde"};
	char printable[] = {"\" !#%+*,-./;:<=>?@^_`~{|}"};
	char empty[] = {""};
	
	printf("%d should be 1\n", ft_str_is_printable(nums));
	printf("%d should be 1\n", ft_str_is_printable(Alpha));
	printf("%d should be 1\n", ft_str_is_printable(alpha));
	printf("%d should be 1\n", ft_str_is_printable(printable));
	printf("%d should be 1\n", ft_str_is_printable(empty));

	return (0);
}
