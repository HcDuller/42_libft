/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:08:30 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/08 18:14:12 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static	size_t	occ_count(char const *s, char c);
static	size_t	cut_and_move(char const *s, char c, char **aptr, size_t occ);
static	void		free_all(char **a);

char	**ft_split(char const *s, char c)
{
	size_t	size;
	size_t	i;
	size_t	s_index;
	char	**aptr;

	aptr = NULL;
	if (s)
	{
		size = occ_count(s, c);
		i = 0;
		s_index = 0;
		aptr = (char **)ft_calloc(size + 1, sizeof (char *));
		while (i < size)
		{
			s_index += cut_and_move(&s[s_index], c, aptr, i);
			if (!aptr[i])
			{
				free_all(aptr);
				return (NULL);
			}	
			i++;
		}
	}
	return (aptr);
}

size_t	occ_count(char const *s, char c)
{
	char	*pi;
	char	*pf;
	size_t	i;

	pi = (char *)s;
	pf = pi;
	i = 0;
	while (*pf)
	{
		pf++;
		if (*pf == c || !*pf)
		{
			if (pf - pi > 1)
				i++;
			pi = pf;
		}
	}
	return (i);
}

size_t	cut_and_move(char const *s, char c, char **aptr, size_t occ)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	while ((unsigned char)s[i] == (unsigned char)c)
		i++;
	start = i;
	end = i;
	while ((unsigned char)s[i] != (unsigned char)c)
		end = i++;
	aptr[occ] = ft_substr(s, start, (end - start + 1));
	return (i);
}

void	free_all(char **a)
{
	size_t	i;

	i = 0;
	while (a[i])
		free(a[i++]);
	free(a);
}
