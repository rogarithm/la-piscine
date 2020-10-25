/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:32:14 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:24:31 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((65 <= str[counter]) && (str[counter] <= 90))
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}
