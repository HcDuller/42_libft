/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:58:24 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/26 21:33:24 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (0);
}
