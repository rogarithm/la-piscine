/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:47:00 by sh                #+#    #+#             */
/*   Updated: 2020/10/25 22:10:11 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter <= n)
	{

		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
