/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:21:37 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/27 17:36:26 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2 || c1 == '\0' || c2 == '\0')
			return (c1 - c2);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("My fc: %d\n", ft_strncmp("apple", "appicot", 2));
	printf("My fc: %d\n", ft_strncmp("apple", "apricot", 4));
	printf("My fc: %d\n", ft_strncmp("banana", "ban", 10));
	printf("Original fc: %d\n", strncmp("apple", "appicot", 3));
    printf("Original fc: %d\n", strncmp("apple", "apricot", 4));
	printf("Original fc: %d\n", strncmp("banana", "ban", 10));
	return (0);
}
*/