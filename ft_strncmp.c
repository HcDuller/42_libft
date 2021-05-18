/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:56:13 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/18 20:02:01 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				return ((int)((unsigned int)s1[i] - (unsigned int)s2[i]));
		}			
		else if (s1[i] && !s2[i])
			return ((int)((unsigned int)s1[i]));
		else if (!s1[i] && s2[i])
			return (-1 * ((int)((unsigned int)s2[i])));
		i++;
	}
	return (0);
}
