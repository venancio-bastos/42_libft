/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vebastos <vebastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:24:24 by vebastos          #+#    #+#             */
/*   Updated: 2025/10/14 13:53:13 by vebastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-- Compare memmove and memcpy --
- Understand the overlaping thing (if memcpy caresz about ooverlaping why the values are passed directly and memmove that dont care about overlap needs to use a temp array to pass the values)
- Logic behind passing the src to a temp array then to the dest. What happens to the dest? 
*/ 

