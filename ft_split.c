/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:01:11 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/05/01 10:57:11 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_mallocword(const char *str, size_t start, size_t end)
{
	char	*tab;
	size_t	i;

	tab = malloc(sizeof(char) * (end - start + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (start < end)
		tab[i++] = str[start++];
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_countwords(str, c) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > start)
			tab[j++] = ft_mallocword(str, start, i);
	}
	tab[j] = NULL;
	return (tab);
}
