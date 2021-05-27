/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:16:30 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/26 21:33:53 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a1;
	char	*a2;
	int		i;

	i = -1;
	a1 = s1;
	a2 = s2;
	while (++i < n)
	{
		if ((unsigned char)a1[i] != (unsigned char)a2[i])
			return ((unsigned char)a1[i] - (unsigned char)a2[i]);
	}
	return (0);
}
