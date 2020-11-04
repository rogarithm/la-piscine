/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:34:09 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/04 23:07:37 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int idx;

	if (argc < 2)
		return (0);
	idx = 1;
	while (idx < argc)
	{
		ft_putstr(argv[idx]);
		write(1, "\n", 1);
		idx++;
	}
	return (0);
}
