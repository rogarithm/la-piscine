/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:17:00 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 17:26:15 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((('a' <= str[counter]) && (str[counter] <= 'z'))
				|| (str[counter] == '\0'))
			counter++;
		else
			return (0);
	}
	return (1);
}
