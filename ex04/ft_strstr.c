/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:13:32 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/01 17:53:58 by sh               ###   ########.fr       */
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

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				count;
	unsigned int	n_count;

	count = 0;
	n_count = 0;
	while (((s1[count] != '\0') || (s2[count] != '\0')) && (n_count < n))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		else
		{
			count++;
			n_count++;
		}
	}
	return (0);
}

/*
** if we find the position of str that to_find matched, by using
** method of moving pointer itself, returning the pointer gives
** us the whole string except the characters unmatched before.
**
** CLARIFY MORE!
** when to_find is null, as it searches nothing, the output
** should be the src as itself. Meaning, if the src is null,
** the result should be null, and if the src isn't null,
** the result should be the src content unchanged.
** When src is null and to_find isn't null, the output
** should be null.
*/

char	*ft_strstr(char *str, char *to_find)
{
	int find_len;

	if ((*str == '\0') && (*to_find == '\0'))
		return (str);
	if ((*str == '\0') && (*to_find != '\0'))
		return (0);
	if ((*str != '\0') && (*to_find == '\0'))
		return (str);
	find_len = str_len(to_find);
	while (*str)
	{
		if ((*str == *to_find) &&
				(ft_strncmp(str, to_find, find_len) == 0))
			return (str);
		ft_strstr(++str, to_find);
	}
	return (str);
}
