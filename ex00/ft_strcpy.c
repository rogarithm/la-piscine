/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:07:14 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/26 18:39:32 by sehukim          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int counter;
	int dest_len;
	int src_len;

	counter = 0;
	dest_len = str_len(dest);
	src_len = str_len(src);

	if (dest_len >= src_len)
	{
		while (src[counter])
		{
			dest[counter] = src[counter];
			counter++;
		}
	}
	else
		while (dest[counter])
		{
			dest[counter] = src[counter];
			counter++;
		}
	dest[counter] = '\0';
	return (dest);
}
