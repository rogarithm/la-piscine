/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sh <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 22:15:57 by sh                #+#    #+#             */
/*   Updated: 2020/10/28 15:44:53 by sehukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* if we put (n_count < n), in case there's more chars left,
** the last count value returns the s1[]-s2[] value of n+1th.
** thus we need to sub 1 from n, or some other action
** causing the same effect.
*/
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int count;
	unsigned int n_count;

	count = 0;
	n_count = 0;
	while (((s1[count] != '\0') && (s2[count] != '\0')) && (n_count < n - 1))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		else
			count++;
			n_count++;
	}
	return (s1[count] - s2[count]);
}
