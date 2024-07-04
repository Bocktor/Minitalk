/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:34:35 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:16:00 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	ft_putchar(char e, int fd)
{
	write(fd, &e, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar('-', fd);
		nbr = -1 * n;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar(nbr % 10 + '0', fd);
	}
	else
	{
		ft_putchar(nbr + '0', fd);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/