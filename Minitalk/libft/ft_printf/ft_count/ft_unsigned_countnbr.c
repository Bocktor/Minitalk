/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_countnbr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:26:09 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:18:55 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_unsigned_countnbr(int n)
{
	int				count;
	unsigned int	nbr;

	count = 0;
	nbr = n;
	if (nbr == 0)
		return (1);
	else
	{
		while (nbr > 0)
		{
			nbr = nbr / 10;
			count++;
		}
	}
	return (count);
}
