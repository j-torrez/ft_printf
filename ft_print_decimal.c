/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:32 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/06 17:33:34 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_decimal (int n)
{
	long num;
	int count;  
	
	num = n;
	count = 0;  
	if (num < 0)
	{
		num *= -1;
		ft_print_char('-');
		count++;
	}
	if (num > 9)
	{
		count += ft_print_decimal(num / 10);
		count += ft_print_decimal(num % 10);
	}
	else
	{
		ft_print_char(num + 48);
	}
	return count;
}

int	main(void)
{
	int number;
	int count; 

	number = 1234;
	count = ft_print_decimal(number);
	printf("Number: %d\n", number);

	printf("Custom Printf: ");
	ft_print_char('\n');
	printf("Number of character printed: %d\n", count);
	
}