/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:37:05 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:14:37 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_size(long nb)
{
	int	z;

	z = 0;
	if (nb < 0)
	{
		nb = -nb;
		z++;
	}
	while (nb > 0)
	{
		nb /= 10;
		z++;
	}
	return (z);
}

static char	*ft_convert(char *res, int size, long nb)
{
	size--;
	while (nb > 0)
	{
		res[size] = (nb % 10) + 48;
		nb = nb / 10;
		size--;
	}
	return (res);
}

static char	*do_zero(void)
{
	char	*final;

	final = malloc(sizeof(char) * 2);
	if (!final)
		return (NULL);
	final[0] = '0';
	final[1] = '\0';
	return (final);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	j;
	char	*res;

	if (n == 0)
		return (do_zero());
	j = ft_size(n);
	res = malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	res[j] = '\0';
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	res = ft_convert(res, j, nb);
	return (res);
}
