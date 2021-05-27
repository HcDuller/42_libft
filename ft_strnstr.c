/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:59:00 by hde-camp          #+#    #+#             */
/*   Updated: 2021/05/26 21:34:29 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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
