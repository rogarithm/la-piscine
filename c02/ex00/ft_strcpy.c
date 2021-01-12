/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:07:14 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 18:45:00 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** if dest_len >= src_len, copy src to dest and trim after src
** if there's more chars in dest. if dest_len < src_len,
** copy src until dest ends with null char.
*/

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
