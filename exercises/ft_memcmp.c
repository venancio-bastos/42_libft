/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:54:08 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/20 18:01:50 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*cS1;
	const char	*cS2;

	cS1 = (const char *) s1;	
	cS2 = (const char *) s2;	
	i = 0;
	while (i < n)
	{
		if (cS1[i] != cS2[i])
			break ;
		i++;
	}
	return (cS1[i] - cS2[i]);
}