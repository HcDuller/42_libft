/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:05 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/04 18:02:07 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	**t;
	int		l;
	int		i;

	if (!lst || !f || !del)
		return (NULL);
	p = lst;
	l = ft_lstsize(lst);
	i = 0;
	t = (t_list **)malloc(l * sizeof (void *));
	if (t)
	{
		while (i < l)
		{
			t[i++] = f(p);
			p = p->next;
		}
		return (*t);
	}
	return (NULL);
}
