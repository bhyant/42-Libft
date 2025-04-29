/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoitaj <cmoitaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:57:05 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/04/29 17:53:52 by cmoitaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *str, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!tab)
		return (NULL);
	while (str[index])
	{
		tab[index] = f(i, str[index]);
		index++;
	}
	tab[index] = '\0';
	return (tab);
}
