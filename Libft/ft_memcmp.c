/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:55:49 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:55:54 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pointer1, const void *pointer2, size_t size )
{
	const unsigned char		*s1;
	const unsigned char		*s2;
	size_t					i;

	s1 = (const unsigned char *)pointer1;
	s2 = (const unsigned char *)pointer2;
	i = 0;
	while (i < size && (s1[i] == s2[i]))
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
