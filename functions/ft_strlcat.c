/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:43:19 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/27 17:36:04 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	space_left;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	space_left = dstsize - d_len - 1;
	i = 0;
	while (src[i] && i < space_left)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
int	main(void)
{
	char	dst[7] = "Hello ";
	const char src[6] = "World";
	printf("Lenght: %zu\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("Dest: %s", dst);
	return 0;
}
*/