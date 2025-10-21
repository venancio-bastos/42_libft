/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:13:03 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 14:49:50 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*pSrc;
	unsigned char		*pDest;

	pSrc = (const unsigned char *) src;
	pDest = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		pDest[i] = pSrc[i];
		i++;
	}
	return (pDest);
}

/*
int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char src1[] = "Hello, world!";
	char dest1[20];
	char dest2[20];

	memcpy(dest1, src1, strlen(src1) + 1);
	ft_memcpy(dest2, src1, strlen(src1) + 1);

	printf("memcpy:    %s\n", dest1);
	printf("ft_memcpy: %s\n", dest2);
	return (0);
}
*/
