/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:07:59 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/17 15:44:45 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = (t_list *)malloc(sizeof(t_list));
	if (!tab)
		return (NULL);
	tab->content = (void *)content;
	tab->next = NULL;
	tab->back = NULL;
	tab->value = -1;
	tab->base = 0;
	return (tab);
}
