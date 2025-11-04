/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:49:55 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/24 13:07:31 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*new_arr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_arr = malloc(s1_len + s2_len + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	while (s1[i] && i < s1_len)
	{
		new_arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && i < s1_len + s2_len)
	{
		new_arr[i + j] = s2[j];
		j++;
	}
	new_arr[i + j] = '\0';
	return (new_arr);
}

/*
int	main(void)
{
	char const s1[6] = "Hello";
	char const s2[6] = "World";
	printf("Result: %s", ft_strjoin(s1, s2));
	return (0);
}
*/
