/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_upper_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:46:26 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:22 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	do_uppercase_x_0(void)
{
	ft_putchar_fd('0', 1);
	return (1);
}

static int	security_of_uppercase_x(char *tab)
{
	free(tab);
	return (-1);
}

int	ft_format_uppercase_x(long decimal)
{
	unsigned long	sign_decimal;
	int				hexadecimale_result;
	char			*tab;

	sign_decimal = decimal;
	if (sign_decimal == 0)
		return (do_uppercase_x_0());
	hexadecimale_result = 0;
	tab = malloc((sizeof(char) * (ft_hexadecilen(sign_decimal) + 1)));
	if (!tab)
		return (security_of_uppercase_x(tab));
	while (sign_decimal > 0)
	{
		tab[hexadecimale_result] = ft_upper_hexadecimal(sign_decimal);
		sign_decimal = sign_decimal / 16;
		hexadecimale_result++;
	}
	tab[hexadecimale_result++] = '\0';
	ft_reverse(tab, hexadecimale_result);
	free(tab);
	sign_decimal = decimal;
	return (ft_hexadecilen(sign_decimal));
}
