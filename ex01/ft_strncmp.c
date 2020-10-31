/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:13:05 by sh                #+#    #+#             */
/*   Updated: 2020/10/31 22:37:35 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** if we put (n_count < n), in case there's more chars left,
** the last count value returns the s1[]-s2[] value of n+1th.
** thus we need to sub 1 from n, or some other action
** causing the same effect.
*/

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				count;
	unsigned int	n_count;

	count = 0;
	n_count = 0;
	//	while (((s1[count] != '\0') && (s2[count] != '\0')) && (n_count < n - 1))
	while (((s1[count] != '\0') || (s2[count] != '\0')) && (n_count < n))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		else
		{
			count++;
			n_count++;
		}
	}
	return (0);
}
