/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:25:51 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:52:06 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_parameter(va_list arg, const char *format, int i)
{
	i++;
	if (format[i] == 'c')
		return (ft_format_c(va_arg(arg, int)));
	else if (format[i] == 's')
		return (ft_format_s(va_arg(arg, char *)));
	else if (format[i] == 'p')
		return (ft_format_p(va_arg(arg, unsigned long)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_format_d_i(va_arg(arg, int)));
	else if (format[i] == 'u')
		return (ft_format_u(va_arg(arg, unsigned int)));
	else if (format[i] == 'X')
		return (ft_format_uppercase_x(va_arg(arg, unsigned int)));
	else if (format[i] == 'x')
		return (ft_format_lowercase_x(va_arg(arg, unsigned int)));
	else if (format[i] == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		return_value;
	va_list	arg;

	i = 0;
	return_value = 0;
	va_start(arg, format);
	if (!format || *format == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			return_value = return_value + ft_parameter(arg, format, i);
			i = i + 2;
		}
		if (format[i] && format[i] != '%')
		{
			write(1, &format[i], 1);
			return_value++;
			i++;
		}
	}
	va_end(arg);
	return (return_value);
}
/*#include "ft_printf.h"

int	main(void)
{
	printf("%d", ft_printf("%x", 255));
	printf("\n\n");
	printf("%d", printf("%x", 255));
}*/