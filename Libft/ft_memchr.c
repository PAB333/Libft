/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pab <pab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:18:12 by pab               #+#    #+#             */
/*   Updated: 2024/11/08 12:39:37 by pab              ###   ########.fr       */
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
