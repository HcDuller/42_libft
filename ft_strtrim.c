/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:11:51 by hcduller          #+#    #+#             */
/*   Updated: 2021/05/31 20:58:14 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	match_chrset(char c, char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i[3];

	i[0] = 0;
	i[2] = ft_strlen(s1);
	i[1] = i[2] - 1;
	while (match_chrset(s1[i[0]], (char *)set) && i[0] < i[2])
		i[0]++;
	while (match_chrset(s1[i[1]], (char *)set) && i[1] > 0)
		i[1]--;
	return (ft_substr(s1, i[0], i[1] - i[0] + 1));
}

static int	match_chrset(char c, char *set)
{
	char	*ptr;

	ptr = set;
	while (*ptr)
	{
		if ((unsigned char)*ptr++ == (unsigned char)c)
			return (1);
	}
	return (0);
}
