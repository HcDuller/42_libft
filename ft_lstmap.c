/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:05 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/07 19:34:45 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r[3];
	int		l;
	int		i;

	if (!lst || !f || !del)
		return (NULL);
	l = ft_lstsize(lst);
	i = 0;
	while (i < l)
	{
		if (i == 0)
		{
			r[0] = ft_lstnew(f(lst->content));
			r[1] = r[0];
			r[2] = lst->next;
		}
		else
		{
			r[1]->next = ft_lstnew(f(r[2]->content));
			r[1] = r[1]->next;
			r[2] = r[2]->next;
		}
		i++;
	}
	return (r[0]);
}
