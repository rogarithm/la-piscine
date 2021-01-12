/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:49:07 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/27 00:28:24 by sehukim          ###   ########.fr       */
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

int		recur(int c, char *s1, char *s2)
{
	while (s1[c] != '\0')
	{
		if (s1[c] == '\0')
			return (0);
		else
		{
			if (s1[c] == s2[c])
			recur(++c, s1, s2);
			else if (s1[c] > s2[c])
				return (1);
			else
				return (-1);
		}
	}
	return (1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	int s1_len;
	int s2_len;

	s1_len = str_len(s1);
	s2_len = str_len(s2);
	count = 0;
	if (s1_len == s2_len)
	{
		recur(count, s1, s2);
	}
	else
	{
		if (s1_len > s2_len)
			return (1);
		else
			return (-1);
	}
	return (0);
}
