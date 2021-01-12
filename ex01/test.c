/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:47:00 by sh                #+#    #+#             */
/*   Updated: 2020/10/28 11:43:41 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		str_len(char *str)
{
	unsigned int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	unsigned int src_len;

	counter = 0;
	src_len = str_len(src);
	if (n >= src_len)
	{
		while (counter < src_len)
		{
			dest[counter] = src[counter];
			counter++;
		}
		while	(counter < n)
		{
			dest[counter] = '\0';
			counter++;
		}
	}
	else  // n < src_len
		while (counter < n)
		{
			dest[counter] = src[counter];
			counter++;
		}
	dest[counter] = '\0';
	return (dest);
}
