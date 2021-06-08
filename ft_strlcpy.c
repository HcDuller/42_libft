/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:57:39 by hde-camp          #+#    #+#             */
/*   Updated: 2021/06/07 23:37:39 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	r;

	if (!src || !dst || !dstsize)
		return (0);
	r = ft_strlen(src);
	i = 0;
	if(dstsize == 1)
	{
		dst[0] = 0;
		return (r);
	}
	while (i + 1 < dstsize && i < r + 1)
	{
		dst[i] = src[i];
		i++;
		if (i + 1 == dstsize || i == r)
			dst[i] = 0;
	}
	return (r);
}
