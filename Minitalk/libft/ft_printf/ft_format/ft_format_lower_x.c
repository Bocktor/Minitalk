/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_lower_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:25:09 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:08 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	do_lowercase_x_0(void)
{
	ft_putchar_fd('0', 1);
	return (1);
}

static int	security_of_lowercase_x(char *tab)
{
	free(tab);
	return (-1);
}

int	ft_format_lowercase_x(long decimal)
{
	unsigned long	sign_decimal;
	int				hexadecimale_result;
	char			*tab;

	sign_decimal = decimal;
	if (sign_decimal == 0)
		return (do_lowercase_x_0());
	hexadecimale_result = 0;
	tab = malloc((sizeof(char) * (ft_hexadecilen(sign_decimal) + 1)));
	if (!tab)
		return (security_of_lowercase_x(tab));
	while (sign_decimal > 0)
	{
		tab[hexadecimale_result] = ft_lower_hexadecimal(sign_decimal);
		sign_decimal = sign_decimal / 16;
		hexadecimale_result++;
	}
	tab[hexadecimale_result++] = '\0';
	ft_reverse(tab, hexadecimale_result);
	free(tab);
	sign_decimal = decimal;
	return (ft_hexadecilen(sign_decimal));
}
