/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:30:53 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/06/14 15:45:00 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int ft_cases(va_list args, const char format)
{
	if (format == 'c')
		return(ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return(ft_print_str(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(args, int)));
	else
		return(-1);
}

int ft_printf(const char *str, ...)
{
	int	i; 
	va_list args;
	int total_print_len;

	i = 0;
	total_print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("csd", str[i + 1]) != NULL)
		{
			total_print_len += ft_cases(args, str[i + 1]);
			i++;
		}
		else
		{
			total_print_len += ft_print_char(str[i]);
		}
		i++;
	}
	va_end(args);
	return (total_print_len);
 
}	

int	main(void)
{
	// char str[] ="Hello World";
	int number = 12345;
	int result;
	int result1; 

	result = ft_printf("My implementation: %d\n", number);
	printf("My implementation: Numbers of bytes: %d\n", result);

	result1 = printf("Oringinal Printf result: %d\n", number);
	printf("Original count character printf: %d\n", result);
	return 0;
}

