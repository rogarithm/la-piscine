/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:47:00 by sh                #+#    #+#             */
/*   Updated: 2020/10/28 15:22:56 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	unsigned int src_len;
	unsigned int dest_len;

	counter = 0;
	src_len = str_len(src);
	dest_len = str_len(dest);
	while (counter < n)
	{
		if ((counter >= src_len) && (src[counter] != 0))
			dest[counter] = '\0';
		else
			dest[counter] = src[counter];
		counter++;
	}
	while (dest[counter])
	{
		dest[counter] = dest[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
