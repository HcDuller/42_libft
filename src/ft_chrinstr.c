/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrinstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:35:01 by hde-camp          #+#    #+#             */
/*   Updated: 2022/02/05 12:52:49 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrinstr(char c, const char *str)
{
	char	*set;

	if (!(c && str))
		return (0);
	set = str;
	while (*set)
	{
		if (c == *set)
			return ((int) c);
		set++;
	}
	return (0);
}
