/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:49:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 02:28:44 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while ((s1[count] != '\0') && (s2[count] != '\0')) 
	{
		if (s1[count] > s2[count])
			return (1);
		else if (s1[count] < s2[count])
			return (-1);
		else
			while (s1[count] == s2[count])
			{
				count++;
			}
	}
	if (s1[count] != '\0')
		return (1);
	else if (s2[count] != '\0')
		return (-1);
	else
		return (0);
}
