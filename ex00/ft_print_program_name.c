/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:42:35 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/05 01:05:00 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This program displays its own name.
** The name means the first element of argc, if there's more than one.
*/

int	main(int argc, char **argv)
{
	int idx;

	idx = 0;
	if (argc >= 1)
	{
		while (argv[0][idx])
		{
			write(1, &argv[0][idx], 1);
			idx++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
