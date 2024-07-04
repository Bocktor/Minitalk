/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:26:12 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:16:05 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_unsigned_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr > 9)
	{
		ft_unsigned_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(nbr + '0', fd);
	}
}
