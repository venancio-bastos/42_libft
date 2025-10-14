/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:13:03 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/14 13:21:28 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *psrc;
 	unsigned char *pdest;
	size_t	i;

	psrc = (const unsigned char *) src;
	pdest = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}

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


//Rever