/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:30:59 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:33 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) > *(unsigned char *)(s2 + i))
			return (1);
		if (*(unsigned char *)(s1 + i) < *(unsigned char *)(s2 + i))
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[];
	char	s2[];

	s1[] = "abc";
	s2[] = "acc";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s2, s1, 3));
	printf("%d\n\n", memcmp(s2, s1, 3));
	printf("%d\n", ft_memcmp(s1, s1, 3));
	printf("%d\n\n", memcmp(s1, s1, 3));
}
*/