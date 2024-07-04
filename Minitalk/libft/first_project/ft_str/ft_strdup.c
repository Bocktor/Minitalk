/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:55:47 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:16:23 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = ft_strlen((char *)s);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = *(char *)(s + i);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main(void)
{
    printf("%s\n", ft_strdup("coucou"));
    printf("%s\n", strdup("coucou"));
}*/