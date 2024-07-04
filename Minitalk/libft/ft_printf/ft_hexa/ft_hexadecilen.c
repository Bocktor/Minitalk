/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecilen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:26:15 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:26 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_hexadecilen(long decimal)
{
	unsigned long	sign_decimal;
	int				len;

	if (decimal == 0)
		return (1);
	len = 0;
	sign_decimal = decimal;
	while (sign_decimal > 0)
	{
		sign_decimal = (sign_decimal / 16);
		len++;
	}
	return (len);
}
