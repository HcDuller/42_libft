/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:05 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/07 14:58:06 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_mapper(t_list **al, t_list *or, void *(*f)(void *), int len);
static	void	freer(t_list **al);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	**t;
	int		l;

	if (!lst || !f || !del)
		return (NULL);
	l = ft_lstsize(lst);
	t = (t_list **)ft_calloc(l + 1, sizeof (void *));
	if (t)
	{
		if (!ft_mapper(t, lst, f, l))
		{
			freer(t);
			return (NULL);
		}
		p = *t;
		free(t);
		return (p);
	}
	return (NULL);
}

int	ft_mapper(t_list **al, t_list *or, void *(*f)(void *), int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		al[i] = ft_lstnew(f(or->content));
		if (!al[i])
			return (0);
		if (i > 0)
			al[i - 1]->next = al[i];
		i++;
		or = or->next;
	}
	return (1);
}

void	freer(t_list **al)
{
	while (*al)
		free(*al++);
	free(al);
}
