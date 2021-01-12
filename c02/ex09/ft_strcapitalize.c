/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:50:00 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/02 17:53:23 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 28-33: First, convert every uppercase into lower case.
** if of 30: if you increase cnt here (cnt++), it will just increase 1.
** 35: move until you find the first elem of word. despite you removed
** lower case, you need to add it on this condition to filter non-word
** elem only.
** 40: if it's not a number, make it upper case
** 43: after changing, move position to next non-word elem
*/

char	*ft_strcapitalize(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (('A' <= str[cnt]) && (str[cnt] <= 'Z'))
			str[cnt] = str[cnt] + 32;
		cnt++;
	}
	cnt = 0;
	while (str[cnt])
	{
		while ((!((97 <= str[cnt]) && (str[cnt] <= 122)))
				&& (!((65 <= str[cnt]) && (str[cnt] <= 90)))
				&& (!((48 <= str[cnt]) && (str[cnt] <= 57))))
			cnt++;
		if (('a' <= str[cnt]) && (str[cnt] <= 'z'))
			str[cnt] = str[cnt] - 32;
		cnt++;
		while (((97 <= str[cnt]) && (str[cnt] <= 122))
				|| ((48 <= str[cnt]) && (str[cnt] <= 57)))
			cnt++;
	}
	return (str);
}
