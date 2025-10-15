/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:43:19 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/15 19:31:00 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	while (dst[i])
		i++;
	dst_len = i;
	dstsize -= dst_len - 1;
	i = 0;
	while (dst_len < dstsize)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (dst_len = 1);
}

int	main(void)
{
	char dest[7] = "Hello";
	const char *src = "World";
	return (0);
}
