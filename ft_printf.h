/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:31:31 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/06/14 17:07:26 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
 # define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_hexlower(unsigned int nb);
int		ft_hexupper(unsigned int nb);
int		ft_pointer(unsigned long ptr);

#endif
