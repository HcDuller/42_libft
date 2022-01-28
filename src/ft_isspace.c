/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:04:48 by hde-camp          #+#    #+#             */
/*   Updated: 2022/01/28 15:22:14 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_isspace(char c)
{
	if ((int)c >= 9 && (int)c <= 13 || (int)c == 32)
		return (1);
	return (0);
}
