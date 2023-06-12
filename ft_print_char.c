/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:31:14 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/13 00:00:54 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The reason for returning 1 in this case is to indicate 
the number of characters written successfully Dd.*/

#include	"ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
