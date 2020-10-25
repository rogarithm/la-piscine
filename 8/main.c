/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:31:53 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 19:48:25 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char Alpha[] = {"ABCDE"};
	char alpha[] = {"abcde"};
	
	printf("%s should be abcde\n", ft_strlowcase(Alpha));
	printf("%s should be abcde\n", ft_strlowcase(alpha));

	return (0);
}
