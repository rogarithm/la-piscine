/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:55:37 by sh                #+#    #+#             */
/*   Updated: 2020/10/22 16:47:14 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy_2(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (src[counter]) // if its value is '\0', compiler reads it as 0.
	{
			dest[counter] = src[counter];
			counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
