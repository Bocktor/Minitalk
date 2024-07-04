/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:25:48 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:29 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_lower_hexadecimal(long decimal)
{
	char			modulo;
	unsigned long	sign_decimal;

	sign_decimal = decimal;
	modulo = sign_decimal % 16;
	if (modulo > 0 && modulo > 9 && modulo < 16)
		modulo = modulo + 87;
	else
		modulo = modulo + 48;
	return (modulo);
}

int	ft_upper_hexadecimal(long decimal)
{
	unsigned long	sign_decimal;
	char			modulo;

	sign_decimal = decimal;
	modulo = sign_decimal % 16;
	if (modulo > 0 && modulo > 9 && modulo < 16)
		modulo = modulo + 55;
	else
		modulo = modulo + 48;
	return (modulo);
}
