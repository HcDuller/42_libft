/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:23:18 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/03 17:09:22 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	nl;
	size_t	sl;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	sl = ft_strlen(s);
	if (sl < len)
		nl = sl;
	else
		nl = len;
	ptr = ft_calloc(nl + 1, sizeof(char));
	if (ptr && start < sl)
	{		
		while (i < len && s[start + i])
		{
			*(ptr + i) = s[start + i];
			i++;
		}
	}
	return (ptr);
}
