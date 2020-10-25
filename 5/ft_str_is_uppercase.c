/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:31:09 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 17:50:49 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((('A' <= str[counter]) && (str[counter] <= 'Z'))
				|| (str[counter] == '\0'))
			counter++;
		else
			return (0);
	}
	return (1);
}
