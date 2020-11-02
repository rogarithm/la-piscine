/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:06:44 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/02 19:27:34 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int count;
	int cvtd_val;

	i = 0;
	count = 0;
	cvtd_val = 0;
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
		cvtd_val = cvtd_val * 10;
		cvtd_val = cvtd_val + (str[i] - '0');
		i++;
	}
	if ((count % 2) == 0)
		return (cvtd_val);
	else
		return ((-1) * cvtd_val);
}
