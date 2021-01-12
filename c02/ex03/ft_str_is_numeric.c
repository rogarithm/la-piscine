/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:08:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:18:39 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((('0' <= str[counter]) && (str[counter] <= '9'))
				|| (str[counter] == '\0'))
			counter++;
		else
			return (0);
	}
	return (1);
}
