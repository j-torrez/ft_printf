/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:37:16 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/05 17:33:31 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_print_str(char *str)
{
    int i;

    i = 0; 
    if (!str)
    {
        ft_putstr("(null)");
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}
/*
int main(void)
{
    char *str = "Hello, world!";
    int result = ft_print_str(str);

    printf("Number of bytes written: %d\n", result);
    return 0;
}   */