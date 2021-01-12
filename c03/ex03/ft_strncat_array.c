/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:45:04 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 23:10:47 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends the string pointed to by src to the end of the string
** pointed to by dest up to n characters long.
**
** dest's size should be large enough to contain concatenated
** string. It includes null character.
**
** n is the maximum number of chars to be appended.
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_count;
	unsigned int src_count;

	dest_count = 0;
	src_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
	{
		if (src_count == nb)
			break;
		else
		{
			dest[dest_count] = src[src_count];
			dest_count++;
			src_count++;
		}
	}
	dest[dest_count] = '\0';
	return (dest);
}
