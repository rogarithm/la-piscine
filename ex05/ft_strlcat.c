/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:13:32 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/29 01:58:56 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	str_len(char *str)
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
	int count;
	unsigned int n_count;

	count = 0;
	n_count = 0;
	while (((s1[count] != '\0') && (s2[count] != '\0')) && (n_count < n - 1))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		else
			count++;
		n_count++;
	}
	return (s1[count] - s2[count]);
}
/*
** this function take the full size of the buffer (not just the length) and
** guarantee to NUL-terminate the result (as long as size is larger than 0 or,
** in the case of strlcat(), as long as there is at least one byte free in dst).
** A byte for the NUL should be included in size.
** Both src and dst must be NUL-terminated.
**
** This function appends the NUL-terminated string src to the end of dst.
** It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** Return value is the total length of the string that strlcat tried to create.
** It's the initial length of dst + the length of src.
*/
unsigned int ft_strcat(char *dest, char *src, unsigned int size);
{
	int find_len;

	if (*to_find == '\0')
		return (0);
	find_len = str_len(to_find);
	while (*str)
	{
		if ((*str == *to_find) && 
				(ft_strncmp(str, to_find, find_len) == 0))
			return (str);
		ft_strstr(str++, to_find);
	}
	return (str);
}
