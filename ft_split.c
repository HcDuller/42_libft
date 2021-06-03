/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:08:30 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/03 16:37:58 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static	int		matcher(char **a, char const *s, char c);
static	int		free_all(char **a);
static	size_t	occ_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**ar_ptr;
	size_t	i;

	ar_ptr = NULL;
	if (s != NULL)
	{
		i = occ_count(s, c);
		ar_ptr = malloc((sizeof (char *)) * (i + 1));
		ar_ptr[i] = 0;
		if (!matcher(ar_ptr, s, c))
		{
			free(ar_ptr);
			return (NULL);
		}
	}
	return (ar_ptr);
}

int	matcher(char **a, char const *s, char c)
{
	char	*pi;
	char	*pf;
	size_t	i;

	i = 0;
	pf = (char *)s;
	pi = pf;
	while (*pf++)
	{
		if (*pf == c || !*pf)
		{
			if (pf - pi > 0 && (unsigned char)*pi != (unsigned char)c)
			{
				a[i++] = ft_substr(pi, 0, (pf - pi));
				if (!a[i - 1])
					return (free_all(a));
			}
			while (*pf == c)
				pf++;
			pi = pf;
		}
	}
	return (1);
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

static	int	free_all(char **a)
{
	while (*a)
		free(a++);
	return (0);
}
