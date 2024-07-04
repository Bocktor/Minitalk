/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:35:23 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/19 21:08:28 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_sizefor_malloc(char const *str, char b, int a)
{
	int	p;

	p = 0;
	while (str[a] != b && str[a])
	{
		a++;
		p++;
	}
	p++;
	return (p);
}

static int	ft_nb_tab(char const *str, char b)
{
	int	a;
	int	h;

	a = 0;
	h = 0;
	while (str[a])
	{
		while (str[a] == b && str[a])
			a++;
		while (str[a] != b && str[a])
			a++;
		h++;
	}
	return (h);
}

char	**ft_free_for_all(int y, char **split)
{
	while (y >= 0)
	{
		if (split[y])
		{
			free(split[y]);
			split[y] = NULL;
		}
		y--;
	}
	free(split);
	return (NULL);
}

char	**ft_main_split(char **split, char c, char const *s)
{
	int	p;
	int	i;
	int	y;
	int	x;

	i = 0;
	y = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		p = ft_sizefor_malloc(s, c, i);
		split[y] = malloc(sizeof(split[y]) * p);
		if (!split[y])
			return (ft_free_for_all(y, split));
		if (s[i])
		{
			x = 0;
			while (x < (p - 1))
				split[y][x++] = s[i++];
			split[y++][x] = '\0';
		}
	}
	split[y] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(split) * (ft_nb_tab(s, c) + 1));
	if (!split)
		return (NULL);
	if (ft_main_split(split, c, s) == NULL)
		return (NULL);
	return (split);
}
