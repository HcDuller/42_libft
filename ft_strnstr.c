/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:59:00 by hde-camp          #+#    #+#             */
/*   Updated: 2021/05/18 14:55:12 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;	

	if (!*little)
		return ((char *)big);
	b = (char *)big;
	l = (char *)little;
	i = 0;
	while (*b && b < big + len)
	{
		if (*b == *l)
		{
			while (b[i] == l[i] && b + i < big + len && b[i] && l[i])
			{
				i++;
				if (!l[i])
					return (b);
			}
		}
		b++;
	}
	return (0);
}
