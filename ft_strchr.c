/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:28:14 by hde-camp          #+#    #+#             */
/*   Updated: 2021/05/26 21:34:08 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*r;

	r = (char *)s;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
		if (*r == c)
			return (r);
		if (!*r)
			return (0);
	}
	return (0);
}
