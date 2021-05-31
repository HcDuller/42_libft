/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:54:53 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/31 19:21:13 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*aux;

	ptr = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (ptr)
	{
		aux = ptr;
		while (*s1)
			*aux++ = *s1++;
		while (*s2)
			*aux++ = *s2++;
		*aux = 0;
		return (ptr);
	}
	return (0);
}
