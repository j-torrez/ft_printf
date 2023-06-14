/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnbosco <johnbosco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:31:31 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/06/14 15:38:35 by johnbosco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
 # define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_print_char(char c);
int ft_print_str(char *str);
char	*ft_strchr(const char *s, int c);
int	ft_print_int (int n);

#endif
