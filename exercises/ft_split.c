/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:29:23 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/23 15:15:48 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_words(char const *s, char c)
{
	int	i;
	int	total;
	
	i = 0;
	total = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
            total++;
        i++;
	}
	return (total );
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**arr;

// 	return (arr);
// }

int	main(void)
{
	char const s[100] = "   Hello 42 World";
	printf("Number of words: %d\n", get_words(s, 32));
	return (0);
}