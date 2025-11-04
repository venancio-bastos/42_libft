/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:14:52 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/21 18:48:42 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_arr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub_arr = (char *)malloc(len + 1);
	if (!sub_arr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub_arr[i] = s[start + i];
		i++;
	}
	sub_arr[i] = '\0';
	return (sub_arr);
}

/*
int main(void)
{
	char *s = "Hello world";

	printf("%s\n", ft_substr(s, 6, 5));  // "world"
	printf("%s\n", ft_substr(s, 0, 5));  // "Hello"
	printf("%s\n", ft_substr(s, 10, 5)); // "d"
	printf("%s\n", ft_substr(s, 20, 5)); // ""
	return (0);
}
*/
