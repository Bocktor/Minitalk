/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:25:32 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:11 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	do_p_nil(void)
{
	ft_putstr_fd("(nil)", 1);
	return (5);
}

static int	security_of_p(char *tab)
{
	free(tab);
	return (-1);
}

int	ft_format_p(long decimal)
{
	unsigned long	sign_decimal;
	int				hexadecimale_result;
	char			*tab;

	sign_decimal = decimal;
	hexadecimale_result = 0;
	if (sign_decimal == 0)
		return (do_p_nil());
	tab = malloc((sizeof(char) * (ft_hexadecilen(sign_decimal) + 1)));
	if (!tab)
		return (security_of_p(tab));
	while (sign_decimal > 0)
	{
		tab[hexadecimale_result] = ft_lower_hexadecimal(sign_decimal);
		sign_decimal = sign_decimal / 16;
		hexadecimale_result++;
	}
	tab[hexadecimale_result++] = '\0';
	ft_putstr_fd("0x", 1);
	ft_reverse(tab, hexadecimale_result);
	free(tab);
	sign_decimal = decimal;
	return (ft_hexadecilen(sign_decimal) + 2);
}
