/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:05 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/07 20:12:26 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*allocator(t_list *src, void *(*f)(void *));
static	void		clean_all(t_list *fl, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r[3];
	int		l;
	int		i;

	if (!lst)
		return (NULL);
	l = ft_lstsize(lst);
	i = 1;
	r[0] = allocator(lst, f);
	r[1] = r[0];
	r[2] = lst->next;
	while (i < l)
	{
		if (r[1])
			r[1]->next = allocator(r[2]->content, f);
		else
		{
			clean_all(r[0], del);
			return (NULL);
		}
		r[1] = r[1]->next;
		r[2] = r[2]->next;
		i++;
	}
	return (r[0]);
}

t_list	*allocator(t_list *src, void *(*f)(void *))
{
	if (f)
		return (ft_lstnew(f(src->content)));
	return (ft_lstnew(src->content));
}

void	clean_all(t_list *fl, void (*del)(void *))
{
	if (fl->next)
		clean_all(fl->next, del);
	del(fl);
	fl = NULL;
	free(fl);
}
