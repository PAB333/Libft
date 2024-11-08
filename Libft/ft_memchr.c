/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:55:29 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:55:31 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		character;
	size_t				i;

	str = (const unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == character)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
