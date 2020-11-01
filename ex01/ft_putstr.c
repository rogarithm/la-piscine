/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:12:34 by sh                #+#    #+#             */
/*   Updated: 2020/10/29 20:31:34 by sh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int length_counter;

	length_counter = 0;
	while (*str)
	{
		length_counter++;
	}
	return (length_counter);
}

void	ft_putstr(char *str)
{
	int position;

	position = 0;
	while (position < ft_strlen(str))
	{
		write(1, &str[position], 1);
		position = position + 1;
	}
}

