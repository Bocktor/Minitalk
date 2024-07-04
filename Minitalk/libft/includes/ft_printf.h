/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:07:39 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:41:57 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_countnbr(int n);
int		ft_unsigned_countnbr(int n);
int		ft_format_c(char c);
int		ft_format_d_i(int d);
int		ft_format_p(long decimal);
int		ft_format_s(char *s);
int		ft_format_u(int u);
int		ft_format_lowercase_x(long decimal);
int		ft_format_uppercase_x(long decimal);
int		ft_lower_hexadecimal(long decimal);
int		ft_upper_hexadecimal(long decimal);
int		ft_next_lst_printf(t_list *l);
int		ft_next_back_printf(t_list *l);
void	ft_reverse(char *tab, int i);
int		ft_hexadecilen(long decimal);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char e, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_unsigned_putnbr_fd(int n, int fd);

#endif