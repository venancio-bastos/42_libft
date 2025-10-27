/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:29:23 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/27 16:54:41 by vebastos         ###   ########.fr       */
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
	return (total);
}

char	*copy_next_word(char const *s, char c, int *i)
{
	int		start;
	int		len;
	char	*word;
	int		j;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = s[start + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	char	**arr;

	arr = malloc(sizeof(char *) * (get_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		arr[x] = copy_next_word(s, c, &i);
		if (!arr[x])
			return (NULL);
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

/*
int	main(void)
{
	char const s[100] = "   Hello 42 World       ";
	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		i++;
	}
	printf("Number of words: %d\n", get_words(s, ' '));
	return (0);
}
*/
