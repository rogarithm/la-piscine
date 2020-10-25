/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:01:54 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/25 16:17:25 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int counter;

	counter = 0;
	while(str[counter])
	{
		if ('a' <= str[counter] <= 'z' || 'A' <= str[counter] <= 'Z')
			return 1;
		else if (!('a' <= str[counter] <= 'z' || 'A' <= str[counter] <= 'Z'))
			return 0;
		counter++;
	}
}
