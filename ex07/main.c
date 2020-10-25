/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:10:26 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 19:30:08 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char Alpha[] = {"ABCDE"};
	char alpha[] = {"abcde"};
	
	printf("%s should be ABCDE\n", ft_strupcase(Alpha));
	printf("%s should be ABCDE\n", ft_strupcase(alpha));

	return (0);
}
