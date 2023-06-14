/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:18:33 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/14 17:07:37 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Norm error fix*/
#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (s[i] == '\0')
		{
			if ((char)c == '\0')
				return ((char *)s + i);
			else
				break ;
		}
		i++;
	}
	return (0);
}