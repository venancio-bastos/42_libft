/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:21:37 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 11:46:18 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
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