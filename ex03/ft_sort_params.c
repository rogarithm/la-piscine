/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:49:59 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/04 22:30:33 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}
/*
void	swap(char *str1, char *str2)
{
	char temp[];

	temp = ;
	str1 = str2;
	str2 = temp;
}
*/

int	main(int argc, char **argv)
{
	int o_idx;
	int i_idx;
	char *temp;

	if (argc < 2)
		return (0);
	o_idx = 0;
	while (o_idx < argc - 1)
	{
		i_idx = 1;
		while (i_idx < argc - 1 - o_idx)
		{
			if ((ft_strcmp(argv[i_idx], argv[i_idx + 1])) > 0)
			{
				temp = argv[i_idx];
				argv[i_idx] = argv[i_idx + 1];
				argv[i_idx + 1] = temp;
			}
			i_idx++;
		}
		o_idx++;
	}
	i_idx = 1;
	while (i_idx < argc)
	{
		ft_putstr(argv[i_idx]);
		write(1, "\n", 1);
		i_idx++;
	}
	return (0);
}
