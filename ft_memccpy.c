/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:23:40 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/26 15:03:35 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char	*s;
	char	*d;
	int		i;

	i = 0;
	s = src;
	d = dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			i++;
			return (d + i);
		}
	}
	return (0);
}
