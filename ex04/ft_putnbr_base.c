/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:46:33 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/04 11:37:28 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
				&& (!(*str)))
		{
			if (str[base_point] == str[base_point + how_far])
				return (-1);
			if (str[base_point] == str[base_point + how_far])
				how_far++;
		}
		base_point++;
	}
	return (0);
}

/*
** check if the base is in the exceptional case.
** If it is, return -1, and entire function quit.
** If not, return 0, and let next function move on.
*/
int exceptions(char *base)
{
	int xbase;
	// how long is the base?
	xbase = str_len(base);
	// exceptional conditions
	if (xbase == 0 || xbase == 1)
		return (-1);
	if (!(compare_elem(base) == 0))
		return (-1);
	while (*base)
	{
		if (!((*base == '+') || (*base == '-')))
		{
			base++;
		}
		else
			return (-1);
	}
	return (0);
}

/*
** convert integer number into array of xbase_num.
** If div of nbr is larger than base, it means
** that it should be divided more, so call
** itself until the div is lesser than the base.
**
** Store every divs and last mod into an array.
*/
char *make_xbase_num(int nbr, char *base, char *a)
{
	int div;
	int mod;
	int xbase;

	xbase = str_len(base);
	div = nbr / xbase;
	mod = nbr % xbase; 
	if (div >= xbase)
	{
		make_xbase_num(div, base, a);
	}
	else if (div > 0)
	{
		a++;
		*a = div + '0';
	}
	*a = mod + '0';
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char passed_a[100];
	int i;

	i = str_len(passed_a);
	if (!(exceptions(base) == -1))
	{
		make_xbase_num(nbr, base, passed_a);
		while (i != 0)
		{
			write(1, &base[passed_a[i]], 1);
			i--;
		}
	}
}
