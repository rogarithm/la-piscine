/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:32:19 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 22:17:11 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
		while (*dest)
		{
			dest++;
		}
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
	return (temp);
}
