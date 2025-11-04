/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:51:44 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/24 13:08:12 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_s;
	char	*new_s;

	size_s = ft_strlen(s);
	new_s = malloc(size_s + 1);
	if (!new_s)
		return (NULL);
	new_s[size_s] = '\0';
	while (size_s)
	{
		size_s--;
		new_s[size_s] = s[size_s];
	}
	return (new_s);
}
