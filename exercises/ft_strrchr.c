/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:03:14 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 11:20:34 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last > -1)
		return ((char *)(s + last));
	else if (c == '\0')
		return ((char *)(s + i));
	else
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