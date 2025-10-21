/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:49:43 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 11:10:48 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
#include <string.h>
int	main(void)
{
	char	s[10] = "Hello";
	printf("My fc: %s", ft_strchr(s, '\0'));
	printf("\n");
	printf("Original fc: %s", strchr(s, '\0'));
	return (0);
}
*/