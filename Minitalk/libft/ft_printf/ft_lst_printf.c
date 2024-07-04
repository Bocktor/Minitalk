/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:46:44 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 18:41:24 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_next_lst_printf(t_list *l)
{
	int	len;

	len = 0;
	while (l != NULL)
	{
		ft_printf("[ %s, %d , %d]-> ", (char *)l->content, l->value, l->base);
		l = l->next;
		len++;
	}
	ft_printf("NEXT_NULL \n");
	return (len);
}

int	ft_back_lst_printf(t_list *l)
{
	int	len;

	len = 0;
	l = ft_lstlast(l);
	while (l != NULL)
	{
		ft_printf("[ %s, %d , %d]-> ", (char *)l->content, l->value, l->base);
		l = l->back;
		len++;
	}
	ft_printf("BACK_NULL \n");
	return (len);
}
