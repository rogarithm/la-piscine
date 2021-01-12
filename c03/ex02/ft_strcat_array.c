/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:32:19 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 22:11:31 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** string-by-pointer string-by-pointer integer -> string-by-pointer
** append src string to the last (null) position of dest
** if dest string has no character, that is, null,
** it's result is the same as src string.
*/

char	*ft_strcat(char *dest, char *src)
{
	int dest_count;
	int src_count;

	dest_count = 0;
	src_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}
