/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:30:53 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/06/05 18:29:29 by johnbosco        ###   ########.fr       */
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
		if (str[i] == '%' && ft_strchr("cs", str[i + 1]) != NULL)
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
	char str[] ="Hello World";
	int result; 

	result = ft_printf("%s\n", str);
	printf("Numbers of bytes: %d\n", result);
	return 0;
}

