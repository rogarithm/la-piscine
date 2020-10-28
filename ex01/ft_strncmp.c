/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:49:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 21:39:04 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

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
	return (s1[count] - s2[count]);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int shorter_len;
	unsigned int accumulator;

	accumulator = 0;
	if (str_len(s1) >= str_len(s2))
		shorter_len = str_len(s2);
	else
		shorter_len = str_len(s1);
	if (shorter_len <= n)
		while (accumulator != shorter_len)
		{
			ft_strcmp(s1, s2);
		}
	else
		while (accumulator != n)
		{
			ft_strcmp(s1, s2);
		}
		return (s1[accumulator] - s2[accumulator]);
}
