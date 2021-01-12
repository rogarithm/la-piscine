/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:11:05 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 11:38:08 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((97 <= str[counter]) && (str[counter] <= 122))
			str[counter] = str[counter] - 32;
		counter++;
	}
	return (str);
}
