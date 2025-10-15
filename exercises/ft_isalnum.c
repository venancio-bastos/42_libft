/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:48:30 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/15 15:36:42 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isalpha(str[i]) && ft_isdigit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(int ac, char **av)
{
	(void) ac;
	ft_isalnum(av[1]);
	return (0);
}
*/
