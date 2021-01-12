/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:01:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 22:16:29 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if ((('a' <= str[counter]) && (str[counter] <= 'z')) ||
				(('A' <= str[counter]) && (str[counter] <= 'Z')) ||
				str[counter] == '\0')
			counter++;
		else
			return (0);
	}
	return (1);
}
