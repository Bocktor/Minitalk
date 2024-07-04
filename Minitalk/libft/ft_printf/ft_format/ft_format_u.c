/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:25:38 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:19 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_format_u(int u)
{
	ft_unsigned_putnbr_fd(u, 1);
	return (ft_unsigned_countnbr(u));
}
/*
int	main(void)
{
	ft_format_u(-1);
}*/