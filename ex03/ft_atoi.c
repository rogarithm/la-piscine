/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:06:44 by sehukim           #+#    #+#             */
/*   Updated: 2020/10/31 17:52:12 by sehukim          ###   ########.fr       */
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
	//(9 < str[i] < 13 || str[i] == 32)
	while (((9 < str[i]) && (str[i] < 13)) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			i++;
		else
		{
			count++;
			i++;
		}
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
