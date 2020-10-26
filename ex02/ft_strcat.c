/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:32:19 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 03:54:30 by sehukim          ###   ########.fr       */
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

char *ft_strcat(char *dest, char *src)
{
	int dest_count;
	int src_count;

	dest_len = str_len(dest);
	src_len = str_len(src);
	if (end_of_dest?)
		(concatenate_src_to_dest);
	else (add counter for dest);
}

char *concatenate_src_to_dest(?)
{
	while (?)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	return (dest);
}
