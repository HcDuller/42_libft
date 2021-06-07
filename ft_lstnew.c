/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcduller <hcduller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:34:38 by hcduller          #+#    #+#             */
/*   Updated: 2021/06/07 15:08:22 by hcduller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	//if (!content)
	//	return (NULL);
	p = malloc(sizeof(t_list));
	if (p)
	{
		p->content = content;
		p->next = NULL;
	}
	return (p);
}
