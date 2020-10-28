/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:50:00 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/28 11:39:44 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int counter;

	counter = 1;
	while (str[counter])
	{
		if (('a' <= str[counter - 1]) && (str[counter - 1] <= 'z'))
			str[counter] = str[counter] - 32;
		if (str[counter - 1] == 32 &&
				(('a' <= str[counter]) && (str[counter] <= 'z')))
			str[counter] = str[counter] - 32;
		else if (str[counter - 1] == 45 &&
				(('a' <= str[counter]) && (str[counter] <= 'z')))
			str[counter] = str[counter] - 32;
		else if (str[counter - 1] == 43 &&
				(('a' <= str[counter]) && (str[counter] <= 'z')))
			counter++;
	}
	return (str);
}
