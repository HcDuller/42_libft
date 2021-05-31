/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:23:18 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/31 16:34:53 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr)
	{		
		while (i < len && s[start + i])
		{
			*(ptr + i) = s[start + i];
			i++;
		}
	}
	return (ptr);
}
