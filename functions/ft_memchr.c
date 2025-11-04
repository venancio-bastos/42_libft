/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:36:19 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/24 13:13:06 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    const char data[] = "Hello world";
    char *ptr;

    ptr = memchr(data, 'o', 8); // search only first 8 bytes
    if (ptr)
        printf("Found: %s\n", ptr);
    else
        printf("Not found\n");

    return 0;
}
*/