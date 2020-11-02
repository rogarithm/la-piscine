/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:49:26 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/02 15:39:56 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char Alpha[] = {"salut, comment ty vas ? 42mots quarante-deux; cinquante+et+un"};
	
	printf("%s should be\n", ft_strcapitalize(Alpha));
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
	return (0);
}
