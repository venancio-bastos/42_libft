/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:24:24 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/27 17:40:39 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *) dest + i) = *((unsigned char *) src + i);
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((unsigned char *) dest + i) = *((unsigned char *) src + i);
		}
	}
	return ((unsigned char *) dest);
}

/*
int	main(void)
{
	char str1[] = "Geeks";
	char str2[] = "Quiz";
	ft_memmove(str1, str2, sizeof(str2));
	printf("After - My func\n");
	printf("%s", str1);
	printf("\n");
	memmove(str1, str2, sizeof(str2));
	printf("After - Bib func\n");
	printf("%s", str1);
	printf("\n");
	return (0);
}
*/
