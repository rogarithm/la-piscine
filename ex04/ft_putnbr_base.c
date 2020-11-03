/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:46:33 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/03 17:22:14 by sh               ###   ########.fr       */
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
** convert integer number nbr based on the base.
** If div of nbr is larger than base, it means
** that it should be divided more, calling
** itself until the div is lesser than the base.
**
** Store every divs and last mod into array a.
*/
char *divide_again(int nbr, char *base, char *a)
{
	int div;
	int mod;
	int counter;

	div = nbr / str_len(base);
	mod = nbr % str_len(base);
	counter = 0;
	if (!(exceptions(base) == -1))
	{
		while (div > str_len(base))
		{
			a[counter] = mod;
			divide_again(div, base, a);
			counter++;
		}
		a[counter] = mod;
		a[counter + 1] = div;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char passed_a[32];
	int i;

	i = str_len(passed_a);
	divide_again(nbr, base, passed_a);
	while (passed_a[i] != '\0')
	{
		write(1, &base[passed_a[i]], 1);
		i--;
	}
}

#include <stdio.h>
#include <unistd.h>
void ft_putnbr_base(int nbr, char *base);
int main(void)
{
	ft_putnbr_base(1234567890, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "01");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "0123456");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "01234");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQ");
	write(1, "\n", 1);
	write(1, "\n", 1);

	ft_putnbr_base(1234567890, ")!@#$%^&*(");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "OI");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "\'\"\?>.<,QWERT ABC");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "aQqR Tt");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "=_|{}");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "ZXCS DF12345;:'\"qwertyas@#$");
	write(1, "\n", 1);

	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= ");
	write(1, "\n", 1);
	ft_putnbr_base(0, "!@#$");
	write(1, "\n", 1);
	write(1, "\nT1: ", 5);
	ft_putnbr_base(12345, "1234563");
	write(1, "\nT2: ", 5);
	ft_putnbr_base(12345, "12345-64");
	write(1, "\nT3: ", 5);
	ft_putnbr_base(12345, "12345678+");
	write(1, "\nT4: ", 5);
	ft_putnbr_base(12345, "1");
	write(1, "\nT5: ", 5);
	ft_putnbr_base(12345, "");
	write(1, "\nT6: ", 5);
	ft_putnbr_base(12345, "a12356a7");
	write(1, "\n", 1);
	return 0;
}
