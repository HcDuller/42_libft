/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 09:27:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/05/17 16:40:50 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static	size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sc;
	size_t	sd;
	size_t	i;

	sc = ft_strlen(src);
	sd = ft_strlen(dst);
	i = 0;
	if (sc + size > sc + sd)
		sc = sc + sd;
	else
		sc = sc + size;
	while (src[i] && sd + 1 < size)
	{
		dst[sd++] = src[i++];
		if (!(src[i] && sd + 1 < size))
			dst[sd] = '\0';
	}
	return (sc);
}
