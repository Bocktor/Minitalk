/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:25:33 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/15 16:25:55 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	plus_minus(const char *str)
{
	int	i;
	int	operator;

	i = 0;
	operator = 1;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == 43)
			operator = 1;
		else if (str[i] == 45)
			operator = -1;
		i++;
	}
	return (operator);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	a;

	i = 0;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == 43 || str[i] == 45)
		i++;
	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	sign = plus_minus(str);
	return (sign * a);
}
