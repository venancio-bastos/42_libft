/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:20:09 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/21 14:59:23 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	i = nmemb * size;
	if (i != 0 && nmemb > (size_t)(-1) ? size)
		return (NULL);
	out = malloc(i);
	if (!out)
		return (NULL);
	ft_bzero(out, i);
	return (out);
}
