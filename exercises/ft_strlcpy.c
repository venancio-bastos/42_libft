/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:15:44 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 15:10:52 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
		{
			dst[i] = src[i];
		}
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*
int	main(void)
{
	char dest[10];
	char *src = "HelloWorld!";
	size_t result;

	result = ft_strlcpy(dest, src, sizeof(dest));

	printf("Dest %s\n", dest);
	printf("Length %zu\n", result);

	return (0);
}
*/