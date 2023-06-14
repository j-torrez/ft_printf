/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:32 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/14 15:38:00 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*int	ft_print_decimal (int n)
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
}	*/


int	ft_print_int(int n)
{
	int				nb;
	unsigned int	i;

	nb = n;
	i = 1;
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	return (i);
}

/*
int	main(void)
{
	int number;
	int count; 

	number = 1234;
	count = print_int(number);
	//printf("Number: %d\n", number);

	//printf("Custom Printf: ");
	//ft_print_char('\n');
	printf("Number of character printed: %d\n", count);
	
}	*/