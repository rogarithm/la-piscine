/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:46:33 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/01 21:28:07 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
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
while (*base)
{
	if ((*base == '+') || (*base == '-'))
	return (0);
	compare_elem(base)
}
/* compare if there's same element in str
** starts with (0, 1) ... (0, len-1),
** to (len-2, len-1). If there's no matching,
** OK. If not, there's 2 or more the same
** element, so KO.
*/
int	compare_elem(char *str)
{
	int length;
	int base_point;
	int how_far;

	length = str_len(str);
	base_point = 0;
	how_far = 1;
	while (base_point != (length - 1))
	{	
		while ((str[base_point] != str[base_point + how_far])
				&& !(*str))
		{
			how_far++;
		}
		base_point++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int xbase;

	xbase = strlen(base);
	// exceptional conditions
	if (xbase == 0 || xbase == 1)
		return (-1);
	if !(compare_elem(str) == 0)
		return (-1);
	while (*str)
	{
		if (!((*str == '+') || (*str == '-')))
			str++;
		return (-1);
	}
}
