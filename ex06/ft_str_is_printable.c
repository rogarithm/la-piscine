/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:57:09 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:22:44 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (((32 <= str[counter]) && (str[counter] <= 126))
				|| (str[counter] == '\0'))
			counter++;
		else
			return (0);
	}
	return (1);
}
