/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:01:07 by hde-camp          #+#    #+#             */
/*   Updated: 2021/05/26 21:34:57 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	int		i;

	r = (char *)s;
	i = 0;
	while (*r)
	{
		i++;
		r++;
	}
	while (i >= 0)
	{
		if (*r == c)
			return (r);
		r--;
		i--;
		if (i == 0 && !(*r == c))
			return (0);
	}
	return (0);
}
