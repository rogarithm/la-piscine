/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:46:33 by sehukim           #+#    #+#             */
/*   Updated: 2020/11/01 05:37:22 by sehukim          ###   ########.fr       */
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

while (*base)
{

void	ft_putnbr_base(int nbr, char *base)
{
	int xbase;

	xbase = strlen(base);
	// exceptional conditions
	if (xbase == 0 || xbase == 1)
		return (-1);
	
