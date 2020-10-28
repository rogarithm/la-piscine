/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refine_ft_strcat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:32:19 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 17:06:24 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/* from my decision, char should be assigned including
** when dest_len + src_len
*/
char	*cat(char *dest, char *src, int dest_c)
{
	int dest_len;
	int src_len;
	int src_c;

	src_c = 0;
	src_len = str_len(src);
	dest_len = str_len(dest);
	while (dest_c <= src_len + dest_len - 1)
	{
		dest[dest_c] = src[src_c];
		dest_c++;
		src_c++;
	}
	dest[dest_c] = '\0';
	return (dest);
}

/*
** as concatenate should start from null char's position
** increase dest_count by 1 at last
*/
char	*ft_strcat(char *dest, char *src)
{
	int dest_count;
	int dest_len;

	dest_len = str_len(dest);
	dest_count = 0;
	if (dest == '\0')
		return (src);
	else
		while (dest_count < dest_len)
		{
			dest_count++;
		}
	dest_count = dest_count + 1;
	return (cat(dest, src, dest_count));
}
