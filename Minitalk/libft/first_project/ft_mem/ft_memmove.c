/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:03:29 by jbocktor          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:39 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	m;

	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		m = n;
		i = m - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)(n))
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "abcOdefghijklm";
	printf("%s\n", src);
	ft_memmove(src, src + 4, 5);
	printf("%s\n", src);
	return (0);
}*/
