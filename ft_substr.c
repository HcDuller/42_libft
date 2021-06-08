/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:23:18 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/08 15:42:16 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static	size_t	smaller(size_t a, size_t b);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sl;
	size_t	i;
	size_t	nl;
	char	*r;

	if (!*s)
		return (NULL);
	if (!len)
		return ((char *)ft_calloc(sizeof(char), 1));
	sl = ft_strlen(s);
	i = 0;
	nl = 1;
	if (sl > start)
		nl += smaller(len, (sl - start));
	r = (char *)ft_calloc(sizeof(char), nl);
	if (r)
	{
		while (*(s + start + i) && i + 1 < nl)
		{
			*(r + i) = *(s + start + i);
			i++;
		}
		*(r + i) = 0;
	}		
	return (r);
}

size_t	smaller(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
