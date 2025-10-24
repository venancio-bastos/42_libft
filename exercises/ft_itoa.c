/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:19:19 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/23 20:17:09 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		n_len;
	long	nl;
	char	*nbr;

	n_len = get_len(n);
	nbr = malloc(n_len + 1);
	nl = n;
	if (!nbr)
		return (NULL);
	nbr[n_len] = '\0';
	i = 0;
	if (nl < 0)
	{
		nbr[i++] = '-';
		nl *= -1;
	}
	while (i < n_len)
	{
		nbr[--n_len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (nbr);
}

/*
int	main(void)
{
	printf("Result: %s", ft_itoa(-1));
	return (0);
}
*/
