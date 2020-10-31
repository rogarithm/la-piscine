/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:55:33 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/01 01:16:23 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int dest_count;
	unsigned int src_count;

	dest_len = str_len(dest);
	dest_count = 0;
	src_count = 0;
	if (size >= (dest_len + 1))
	{
		while (dest[dest_count])
			dest_count++;
		while (src_count < (size - dest_len - 1))
		{
			dest[dest_count] = src[src_count];
			dest_count++;
			src_count++;
		}
	}
	dest[dest_count] = '\0';
	return (size - 1);
}
