/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:32:19 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 03:54:17 by sehukim          ###   ########.fr       */
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

char *cat(char *dest, char *src, int dest_c)
{
	int dest_len;
	int src_len;
	int src_c;

	src_c = 0;
	src_len = str_len(src);
	dest_len = str_len(dest);
	while (dest_c < src_len + dest_len)
	{
		dest[dest_c] = src[src_c];
		dest_c++;
		src_c++;
	}
	return (dest);
}

char *ft_strcat(char *dest, char *src)
{
	int dest_count;
	int dest_len;

	dest_len = str_len(dest);
	dest_count = 0;
	if (dest[dest_count] == '\0')
		return (src);
	while (dest[dest_count] < dest_len)
	{
		dest_count++;
	}
	return (cat(dest, src, dest_count));
}
