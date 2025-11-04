/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:03:14 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/27 17:36:14 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if ((unsigned char )s[i] == (unsigned char )c)
			last = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	if (last != -1)
		return ((char *)(s + last));
	return (NULL);
}

/*
#include <string.h>
int	main(void)
{
	char	s[10] = "Hello lol";
	printf("My fc: %s", ft_strrchr(s, 'l'));
	printf("\n");
	printf("Original fc: %s", strrchr(s, 'l'));
	return (0);
}
*/