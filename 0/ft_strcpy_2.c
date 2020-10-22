/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:55:37 by sh                #+#    #+#             */
/*   Updated: 2020/10/22 16:34:48 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int str_len(char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
		return (len);
}

char	*ft_strcpy_2(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (counter < str_len(src))
	{
		if (counter < str_len(src) -1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		else
			dest[counter] = '\0';
	}
	return (dest);
}
