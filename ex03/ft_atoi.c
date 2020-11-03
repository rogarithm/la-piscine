/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:06:44 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/03 18:18:34 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int count;
	int value;

	i = 0;
	count = 0;
	value = 0;
	while (((9 <= str[i]) && (str[i] <= 13)) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		value = value * 10;
		value = value + (str[i] - '0');
		i++;
	}
	if ((count % 2) == 0)
		return (value);
	else
		return ((-1) * value);
}
/*
#include <stdio.h>
int	ft_atoi(char* str);
int main(void)
{
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("5678"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-5678"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));

	printf("%d\n", ft_atoi("    +----++-2147483648"));
	printf("%d\n", ft_atoi("+------+0"));
	printf("%d\n", ft_atoi("\t\v----------++5123145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++2123133345"));

	printf("%d\n", ft_atoi("    +----++-2147483asdas648"));
	printf("%d\n", ft_atoi("+------+10000001"));
	printf("%d\n", ft_atoi(" +-----------+00000000000000000000000\t\v\f\n 000000000000000000"));
	printf("%d\n", ft_atoi("\t\v----------++5123--145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123+145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++212  3133345"));
	return 0;
}
*/
