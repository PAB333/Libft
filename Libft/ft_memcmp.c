/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pab <pab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:51:44 by pab               #+#    #+#             */
/*   Updated: 2024/11/07 23:03:48 by pab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	const unsigned char *	s1;
	const unsigned char *	s2;

	s1 = (const unsigned char *)pointer1;
	s2 = (const unsigned char *)pointer2;
	size_t	i;

	i = 0;
	while (i < size && (s1[i] == s2[i]))
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}