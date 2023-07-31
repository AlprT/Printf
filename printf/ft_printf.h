/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:29:41 by atangil           #+#    #+#             */
/*   Updated: 2023/07/31 11:43:44 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_hprint(unsigned int n, const char form);

// counter
int		ft_hcount(unsigned int i);
int		ft_ucount(unsigned int n);

// main
size_t	ft_printf(const char *str, ...);
size_t	ft_format(va_list args, const char form);

// print
size_t	ft_putper(void);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_ptr(unsigned long long ptr);
size_t	ft_putunsigned(unsigned int i);
int		ft_print_hex(unsigned int n, const char format);
size_t	ft_putnbr(int i);

// convert
char	*ft_uitoa(unsigned int i);
char	*ft_itoa(int n);

#endif