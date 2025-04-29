/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoitaj <cmoitaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:19:01 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/04/29 18:29:22 by cmoitaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	size_t	index;

	index = 0;
	if (!str || !f)
		return ;
	while (str[index])
	{
		f(i, &str[index]);
		index++;
	}
}
