/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:50:00 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/02 15:39:57 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int counter;

	counter = 1;
	while (*str)
		if (('A' <= str[counter - 1]) && (str[counter - 1] <= 'Z')) // convert every uppercase into lower case
		{
			str[counter - 1] = str[counter - 1] + 32;
			counter++;
		}
	while (*str)
	{
		// move until you find the first elem of word. despite you removed
		// lower case, you need to add it on this condition to filter just non-word elem.
		while ((!((97 <= str[counter - 1]) && (str[counter - 1] <= 122))) 
				&& (!((48 <= str[counter - 1]) && (str[counter - 1] <= 57)))
				&& (!((48 <= str[counter - 1]) && (str[counter - 1] <= 57))))
			counter++;
		if (('a' <= str[counter - 1]) && (str[counter - 1] <= 'z')) // if it's not number, make it upper case
			str[counter - 1] = str[counter - 1] - 32;
		while ((!((97 <= str[counter - 1]) && (str[counter - 1] <= 122))) // after changing, move position to next non-word elem
				&& (!((48 <= str[counter - 1]) && (str[counter - 1] <= 57)))
				&& (!((48 <= str[counter - 1]) && (str[counter - 1] <= 57))))
			counter++;
	}
	return (str);
}
