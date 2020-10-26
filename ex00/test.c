/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:49:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 04:47:05 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while ((s1[count] != '\0') && (s2[count] != '\0')) 
	{
		if ((s1[count] > s2[count]) || (s1[count] < s2[count]))
			return (s1[count] - s2[count]);
		else
			count++;
	}
	return (0);
}
